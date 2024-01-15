#include<iostream>
using namespace std;

int bs(int arr[],int s,int e,int x){
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        return -1;
    }
}

int exp_search(int arr[],int n,int x){
    int i=1;
    if(arr[0]==x){
        return 0;
    }
    while(i<n && arr[i]<=x){
        i*=2;
    }
    return bs(arr,i/2,min(i,n-1),x);
    //as i is increasing by the factor of 2 so i/2 will give the last position of i which is less than 
    //target so we get our starting position. 
}


int main(){
    int arr[]={1,3,5,7,9,12,13,35,36,23};
    int n=sizeof(arr)/sizeof(int);
    int x=13;
    int ans=exp_search(arr,n,x);
    cout<<"The index of 7 is:"<<ans;
}
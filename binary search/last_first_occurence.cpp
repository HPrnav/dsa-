#include<iostream>
using namespace std;
//the problem war to fing the first and last element of the repeting element in array
//the condition :
//were there were repeating element in the arrays.
//the array was sorted 
//


int first(int arr[],int n,int key){
    int ans =-1,s=0,e=n-1,mid;
    mid=s+(e-s)/2;
    while(s<=e){
        if( arr[mid]==key){
            ans=mid;
            e=mid-1;//bcoz need to find first number so moving towards right

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
        }
        return ans;

}
int last(int arr[],int n,int key){
    int ans =-1,s=0,e=n-1,mid;
    mid=s+(e-s)/2;
    while(s<=e){
        if( arr[mid]==key){
            ans=mid;
            //only below  line of this function has change else both first and last function is same.
            s=mid+1;//bcoz need to find last number so moving towards end of string

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){ 
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
        }
        return ans;

}
int main(){
    int arr[]={15,12,9,9,9,9,8,5,4,3,1};
    cout<<"the start and end position of (9) is "<<first(arr,11,9)<<last(arr,11,9);


}
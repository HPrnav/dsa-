#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,-3,-6,1,7,-9};
    int n=sizeof(arr)/sizeof(int);
    int l=0,m=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[l],arr[m]);
            l++;
        }
        m++;
    }
    for(int i=0;i<m;i++){
        cout<<arr[i]<<",";
    }

}
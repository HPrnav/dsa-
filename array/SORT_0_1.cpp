#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,1,0,1,0,0};
    int n=sizeof(arr)/sizeof(int);
    int l=0,h=n-1;
     while(l<h){
        if(arr[l]==1 &&arr[h]==0){
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
        else if(arr[l]==0){
            l++;
        }
        else if(arr[h]==1){
            h--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    
    

}
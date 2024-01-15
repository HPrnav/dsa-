#include<iostream>
using namespace std;


int searchbin(int arr[],int size,int key){
    int end=size-1;
    int start=0;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;}

        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;}
    mid=start+(end-start)/2;
         

    }
    return -1;
    }


int main(){
    int grp[10]={1,2,3,4,5,6,7,8,9,12};
    int arr1[7]={12,23,34,36,46,76,78};
    int indx=searchbin(arr1,7,36);
    cout<<"the index of key is"<<indx;
    return 0;

}
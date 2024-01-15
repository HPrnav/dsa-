#include<iostream>
using namespace std;

void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int left_len=mid-s+1;
    int right_len=e-mid;

    int* left =new int[left_len];
    int* right=new int[right_len];

    int k=s;
    for(int i=0;i<left_len;i++){
        left[i]=arr[k];
        k++;
    }
    for(int i=0;i<right_len;i++){
        right[i]=arr[k];
        k++;
    }

    int left_idx=0;
    int right_idx=0;

    int main_idx=s;

    while(left_idx<left_len && right_idx<right_len){
        if(left[left_idx]<right[right_idx]){
            arr[main_idx]=left[left_idx];
            left_idx++;
            main_idx++;
        }
        else{
            arr[main_idx]=right[right_idx];
            right_idx++;
            main_idx++;
        }
    }

    while(left_idx<left_len){
         arr[main_idx]=left[left_idx];
         main_idx++;
         left_idx++;
    }
    while(right_idx<right_len){
         arr[main_idx]=right[right_idx];
         main_idx++;
         right_idx++;
    }
    delete []left;
    delete []right;

 }

void mergesort(int arr[],int s,int e){
    if(s>=e) return ;
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
 }

int main()
{
    
int arr[]={10,40,20,70,4};
int s=0;
int size=5;
int e= size-1;

mergesort(arr,s,e);
for(int i=0;i<size;i++){
cout<<arr[i]<<"_";
}


}
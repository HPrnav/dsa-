#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int leftlen=mid-s+1;
    int rightlen=e-mid;

    int *left=new int[leftlen];
    int *right=new int[rightlen];

    int k=s;                    //point to remember
    for(int i=0;i<leftlen;i++){
        left[i]=arr[k];
        k++;
    }

    for(int i=0;i<rightlen;i++){
        right[i]=arr[k];
        k++;
    }
    
    int leftIdx=0;
    int rightIdx=0;
    int mainIdx=s;/// point to remember

    while(leftIdx<leftlen && rightIdx<rightlen){
        if(left[leftIdx]<right[rightIdx]){
            arr[mainIdx]=left[leftIdx];
            mainIdx++;
            leftIdx++;
        }
        else{
            arr[mainIdx]=right[rightIdx];
            mainIdx++;
            rightIdx++;
        }
    }

    while(leftIdx<leftlen){
        arr[mainIdx]=left[leftIdx];
        mainIdx++;
        leftIdx++;
    }
    while(rightIdx<rightlen){
        arr[mainIdx]=right[rightIdx];
        mainIdx++;
        rightIdx++;
    }
    delete[] left;
    delete[] right;
}

void mergesort(int arr[],int s,int e){
    if(s>=e) return ;
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);

}

int main(){
    int arr[]= {10,40,20,70,4};
    int s=0;
    int size=5;
    int e=size-1;

   
    mergesort(arr,s,e);
    cout<<"Array after sorting: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

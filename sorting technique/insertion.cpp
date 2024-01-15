#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int term=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>term){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=term;

    }
}

int main(){
    int arr[9]={1,4,2,5,7,0,9,15,13}; 
    int n=9;
    selectionSort(arr,n);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
}
}
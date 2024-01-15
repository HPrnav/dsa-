#include<iostream>
#include<utility>
using namespace std;

void Bubblesort(int[],int);

void Bubblesort(int arr[],int n){
   for(int i=0;i<n-1;i++){
    for ( int j = 0 ;j < n - i - 1;++j) {
        if (arr[j] > arr [j+1]){
            swap(arr[j],arr[j+1]);
        }
   } 
   }

}
int main(){
    int arr[9]={1,4,2,5,7,0,9,15,13}; 
    int n=9;
    Bubblesort(arr,n);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }
    
}
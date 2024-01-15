#include<iostream>
#include<utility>
using namespace std;
void selectionSort(int [],int );
void selectionSort(int arr[],int n){

    for (int i=0;i<n-1;i++)
    {
   int minindex=i;                   //the logic is first we consider the first term as te minimun term 
   for(int j=i+1;j<n;j++){                //and if we find any term less than arr[i],we swap it 
    if (arr[j]<arr[minindex])            //the outer loop runs from each value of array and the inner loop
    {                                    //runs form i till end of array to check for smaller number[yt   ]
        minindex=j;
    }
   }        
    swap(arr[minindex],arr[i]);
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
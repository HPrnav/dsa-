#include<iostream>
using namespace std;
// finding the maximum value using the function
int maxm(int num[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(max<num[i]){
            max=num[i];
        }
    }
    return max;
}
//finding the minimum value in the array 
int min(int num[],int size){
    int minm;
    for(int j=0;j<size;j++){
        
        minm=min(minm,num[j]);
    }
    return minm;
}

int main(){
    int arr[1000];
    cout<<"enter the size of array"<<endl;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){

        cin>>arr[i];
    }
    cout<<"maximum number is:"<<maxm(arr,size)<<endl;
    cout<<"minimum number is:"<<min(arr,size)<<endl;
    return 0;
}
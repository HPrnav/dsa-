#include<iostream>
using namespace std;
void turn(int arr[],int k){
    int i=0;
    int j=1;
    for(int m=0;m<(k/2);m++){
    swap(arr[i],arr[j]);
        i=i+2;
        j=j+2;
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<",";
    }
    }


int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0,j=1;
    
    turn(arr,10);
    return 0;

}
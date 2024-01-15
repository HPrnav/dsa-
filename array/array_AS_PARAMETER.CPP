#include<iostream>
using namespace std;
//as we pass value to function the original value of the variable in main functiondoes not as copy of it is send to the function.
//but when we pass an array as paramete the original value of array get change as the name of the array does not denot the name but also the address of the array.

int update(int arr[],int n){
    arr[n]=0;
    cout<<"loop run"<<endl;
    return 0;
}

int main(){
    int n;
    int arr[5]={1,4,6,56,234};
    int k=6;
    update(arr,2);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<",";
    }
    return 0;

}
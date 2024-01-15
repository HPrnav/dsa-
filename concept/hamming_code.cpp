#include<iostream>
using namespace std;
int convert_bin(int bin){
    int arr[5];
    int num=0;
    for(int i=0;i<5;i++){
    arr[i]=bin%10;
     bin=bin/10;
    }
    for(int i=0;i<sizeof(arr);i++){

    }
}

int main(){
    int arr1[10];
    int arr2[10];
    cout<<"Enter the 4 bit no";
    cin>>arr1[3];
    cin>>arr1[5];
    cin>>arr1[6];
    cin>>arr1[7];
    arr1[1]=arr1[3]^arr1[5]^arr1[7];
    arr1[2]=arr1[3]^arr1[6]^arr1[7];
    arr1[4]=arr1[5]^arr1[6]^arr1[7];
    
    cout<<"The 7 bit no is :";
    for(int i=1;i<8;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the 7 bit code "<<endl;
    for(int i=1;i<8;i++){
        cin>>arr2[i];
    }

    int p1=arr2[1]^arr2[3]^arr2[5]^arr2[7];
    int p2=arr2[2]^arr2[3]^arr2[6]^arr2[7];
    int p3=arr2[4]^arr2[5]^arr2[6]^arr2[7];
    int position=p1+p2*2+p3*4;
    if(position ==0){
        cout<<"no error detected";
    }else{
        cout<<"error detected at position "<<position;
        if(arr2[position]==1){
        arr2[position]=0;
        }
        else{
            arr2[position]=1;
        }
        cout<<"the corrected code is :";
        for (int i=1;i<8;i++){
            cout<<arr2[i];
        }
    }
    



}
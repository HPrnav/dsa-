#include<iostream>
using namespace std;
void print_diag(int arr[][3],int n){
    for(int i=0;i<n;i++){
        int k=n-i-1;
        cout<<arr[i][k];
    }
    return;
}
int main(){
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    print_diag(arr,n);
}
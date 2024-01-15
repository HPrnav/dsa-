#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n,int i){
    if(arr[i]<arr[i-1]){
        return false;
    }
    if(i>=n){
        return true;
    }
    check(arr,n,i+1);
}

int main(){
int arr[]={14,25,1,47,58,69,70,90};
int i=1,n=8;
if(check(arr,n,i))
cout<<"THE ARRAY IS ASCENDING ";

else{
cout<<"THE ARRAY IS  DESCENDING ";
}
}
#include<bits/stdc++.h>
using namespace std;

void shift_even(int arr[],int n,vector<int>&ans,int i){
    
if(i>=n){
    return;
}
 if(arr[i] %2==0){
    ans.push_back(arr[i]);
 }
 
    shift_even(arr,n,ans,i+1);


}

int main(){
    vector<int> ans;
    int arr[]={1,33,43,54,21,65,65,36,84,24};
    int n=10;
    int i=0;
    shift_even(arr,n,ans,i);

    for(auto i:ans){
        cout<<i<<",";
    }
}
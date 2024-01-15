#include<bits/stdc++.h>
using namespace std;

void find(int arr[],int n,int target,int i,int &count){
    if(i>=n){
       return ;
    }
    if(arr[i]==target){
       count++;
    }
     find(arr,n,target,i+1,count); 
}

void prt(int num){
    if(num==0){
        return;
    }
    prt(num/10);
    cout<<num%10;
}

void vectonum(vector<int> arr,int n,int &num,int i){
     if(to_string(num).length()== n){
    num=num+(arr[arr.size()-1]);       
        return;
    }
    num=num+(arr[i]);
    i++;
    num=num*10;
     vectonum(arr,n,num,i);

}
 
int main(){
    // int arr[]={10,23,34,45,11,56,86,10};
    // int n=8;
    // int target=10;
    // int i=0,count=0;
    // find(arr,n,target,i,count);
    // cout<<count;
    vector<int> arr{1,5,3,6,9};
    int num=0,i=0,n=arr.size();
    //prt(num);
    vectonum(arr,n,num,i);
    cout<<num;
}


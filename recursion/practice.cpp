#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

void print_arr(int arr[],int n,int k){
 if(n==k)
 return;

 cout<<arr[k]<<",";
 print_arr(arr,n,k+1);
}
 
int find_no(int arr[],int n,int k,int i){
 if(n==k){
 return -1 ;    
 }
else if(arr[k]==i){
return k;
}
else{
 find_no(arr,n,k+1,i);
}
}

void dbl(int arr[],int i,int n){
    if(i>=n){
        return;
    }
    arr[i]=2*arr[i];
    dbl(arr,i+1,n);
}


int main(){
    //cout<<fibo(4);

    int arr[]={1,4,6,33,12,12,1,7};
    int n=sizeof(arr)/sizeof(int);
    int k=0;

//   //  print_arr(arr,n,k);
//     int i=9;
//     //k is the index ,i is the no to be find
//     cout<<find_no(arr,n,k,i);
dbl(arr,k,n);
for(auto i:arr){
    cout<<i<<",";
}

}
#include<bits/stdc++.h>
using namespace std;

void quicksort(int arr[],int s,int e){
   if(s>=e) return;
   int pivote=e;
   int i=s-1; 
   int j=s;

   while(j< e){
    if(arr[j]<arr[pivote]){
        ++i;
        swap(arr[i],arr[j]);
    }
    j++;
   }
   i++;
   swap(arr[pivote],arr[i]);
   quicksort(arr,s, i-1);
   quicksort(arr,i+1,e);
}

int main()
{
int arr[]={5,7,1,4,9,0,8};
int size=7;
int e=size-1;
int s=0;
cout<<"array before quick sort  ";
for(auto i:arr){
    cout<<i<<":";
}

quicksort(arr,s,e);

cout<<"array  after quick sort  ";
for(auto i:arr){
    cout<<i<<": ";
}
return 0;
}
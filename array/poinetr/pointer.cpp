#include<iostream>
using namespace std;

// void solve(int arr[],int size){
//     cout<<"value of arr in solve"<<arr<<endl;
//     cout<<"value of &arr in solve"<<&arr<<endl;
// }
void change(int *&p){
p=p+1;

}
int main(){
// int arr[]={1,2,3,4};
// solve(arr,4);
//     cout<<"value of arr in main function"<<arr<<endl;
//     cout<<"value of &arr in main function"<<&arr<<endl;

int a=10;
int *p=&a;
cout<<p<<endl;
cout<<&a<<endl;
cout<<*p<<endl;
cout<<a<<endl;
change(p);
cout<<p<<endl;
cout<<&a<<endl;
cout<<*p<<endl;
cout<<a<<endl;

 }

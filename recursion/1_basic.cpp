#include<iostream>
using namespace std;

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    int ans =n*fact(n-1);
    return ans;
    }

void print_num(int n){

    if(n==0){
        return ;
    }
    cout<<","<<n;
    print_num(n-1);
    cout<<","<<n;
}
int pow(int n){
    if(n==0){
        return 1;
    }
    int ans=2*pow(n-1);
    return ans;
}

int main(){
 //   cout<<"Factorial is:"<<fact(5);
 print_num(10);
 //cout<<pow(5);
    
}
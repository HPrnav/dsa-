#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter the string";
    cin>>ch;
    cout<<"The String is:"<<ch;
    cin.getline(ch,100);
    cout<<"The String using 'getline()' function is:"<<ch;
#include<iostream>
#include<string.h>
using namespace std;
void upper(char ch[],int len){
    int i=0;
    while(ch[i]!='\0'){
        if((ch[i]>='a' && ch[i]<='z')){
            ch[i]=ch[i]-32;}
            i++;   
     }
}

void lower(char ch[],int len){
    int i=0;
    while(ch[i]!='\0'){
        if((ch[i]>='A' && ch[i]<='Z')){
            ch[i]=ch[i]+32;}
            i++;   
     }
}


int main(){
    char ch[100];
    cout<<"Enter the String";
    cin.getline(ch,100);
    int len=strlen(ch);
    upper(ch,len);
    cout<<"String in upper case"<<ch<<endl;
    lower(ch,len);
    cout<<"String in lower case"<<ch<<endl;
}
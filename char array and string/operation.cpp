#include<iostream>
#include<string.h>
using namespace std;

void reverse(char newCH[],int len){
    for(int i=0;i<len/2;i++){
        swap(newCH[i],newCH[len-1-i]);
    }
}

int lengthStr(char newCH[]){
     int i=0;
     while(newCH[i]!='\0'){
        i++;
     }
     return i;
}
int main(){


    // char ch[100];
    // cout<<"Enter the string"<<endl;
    // cin>>ch;
    //cout<<"The String is:"<<ch<<endl;
    //wwithout using get line our array will get terrminate when we will press tab or space
    char newCH[100];
    //By using getline our array will terminate only when we we will press enter
    cin.getline(newCH,100);
    cout<<"The String using 'getline()' function is:"<<newCH<<endl;



    int len=lengthStr(newCH);
    //printing length of string using utility function
    len=strlen(newCH);
    cout<<"The length of newCH string is"<<len<<endl;


    
    reverse(newCH,len);
    cout<<"the reverse of the char array is-->"<<newCH<<endl;

}

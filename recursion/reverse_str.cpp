#include<bits/stdc++.h>
using namespace std;

void rev(string &str,int i,int j){
    if(j<=i){
        return;
    }
    else{
        swap(str[i],str[j]);
        rev(str,i+1,j-1);
    }
}
int main(){
    string str ;
    cout<<"Enter the string to reverse";
    cin>>str;
    int i=0, j=str.length()-1;
    rev(str,i,j);
    cout<<"The reverse of string in :"<<str;
}
#include<bits/stdc++.h>
using namespace std;
bool check(string str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    return (check(str,s+1,e-1));

}
int main(){
    string str;
    cin>>str;
    int s=0,e=str.size();
    bool ch=check(str,s,e-1);
    if(ch==0){
        cout<<"The string "<<str<<" is not palandromic"<<endl;
    }
    else{
        cout<<"The string "<<str<<" is palandromic"<<endl;
    }

}
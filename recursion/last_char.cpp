#include<bits/stdc++.h>
using namespace std;
int solve(int i,string str, char x,int &ans){
    if(i>=str.length()){
        return 0;
    }
     if(str[i]==x){
        ans=i;
        solve(i+1,str,x,ans);
     }
     else{
         solve(i+1,str,x,ans);
     } 
     return ans;

}

int main(){
    string str= "abcdeafgsjngfgm";
    char x='m';
    int i=0;
    int ans=-1;
    int idx=solve(i,str,x,ans);
    cout<<"last occurance is "<<ans;
    return 0;

}
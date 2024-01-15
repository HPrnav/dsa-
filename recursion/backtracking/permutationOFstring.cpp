#include<bits/stdc++.h>
using namespace std;

void permutation(string &str,int i){
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        permutation(str,i+1);
        swap(str[i],str[j]);    //backtracking=to nummify effect during string passed by ref

 //if we didnt pass by recursion and then also bt this statement then also no problem as the main statement is going to be same

    }
}
int main(){
    string  str="abc";

    int i=0;
    permutation(str,i);

}
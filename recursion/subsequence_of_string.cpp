#include<bits/stdc++.h>
using namespace std;
void sub_sequence(string str,string output,int index){
    if(str.length()<=index){
        cout<<output<<",";
        return;
    }
    char ch=str[index];
    sub_sequence(str,output,index+1);
    output.push_back(ch);
    sub_sequence(str,output,index+1);

}

int main(){
    string str ="abc";
    string output="";
    int index=0;
    sub_sequence(str,output,index);


}
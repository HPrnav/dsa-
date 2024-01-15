#include<iostream>
using namespace std;
void substr(string str,int s,int e){
    if(s==e){
        return;
    }

    for(int i=s;i<e;i++){
        cout<<str.substr(s,e-i)<<endl;   //substr(index,len)
    }
     cout<<endl;
    
    substr(str,s+1,e);                    // incrementing our start every time

}
int main(){
    string str="12345";
    int e=str.size();
    int s=0;
    substr(str,s,e);
    return 0;

}
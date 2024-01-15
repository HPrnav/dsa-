//stack follows FILO==first in last out;
//stack do not have indexing 
// we have to move by iteration
#include<bits/stdc++.h>  
using namespace std;
int main(){
    stack<string> st;
    st.push("hellow"); 
    st.push("every"); 
    st.push("one"); 
    cout<<st.size()<<endl;
    cout<<st.top()<<endl; 
    while (!st.empty () )  
    {  
        std::cout <<" " << st.top();  
        st.pop();  
    }     
    cout<<"last entry is printed first"<<endl;
    cout<<endl<<st.size();
    }


 
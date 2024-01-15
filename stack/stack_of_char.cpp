#include<iostream>
#include<stack>
using namespace std;


int main() {
string temp ="okgoogle";
stack<char> st;
for(int i=0 ;i<temp.length();i++){
    char ch=temp[i];
    st.push(ch);
}
while(!st.empty()){
    cout<<st.top();
    st.pop();
}


}

#include <iostream>
#include<stack>
using namespace std;


void solve(stack<int> &st,int& ans,int &pos){
if(pos==1){
    ans=st.top();
    // st.pop();     ----------if we want to delete the middle element
    return;
}
pos--;
int temp=st.top();
st.pop();

solve(st,ans,pos);       //recursion

st.push(temp);          //backtracking
}

void find_middle(stack<int> st,int &ans){
    if(st.top()==-1){
        cout<<"stack is empty";
        return;
    }
    int pos=0;

    if(st.size()&1){
          pos=st.size()/2+1;
    }else{
        pos=st.size()/2;
    }
    solve(st,ans,pos);

}
int main() {
    stack<int> st;
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    int ans=-1;
    find_middle(st,ans);
    cout << "The middle element of the stack is: " << ans;
    return 0;
}
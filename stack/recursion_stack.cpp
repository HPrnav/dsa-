#include<iostream>
#include<stack>
using namespace std;


void insert_bottom(stack<int> &st,int &num){
if(st.empty()){
    st.push(num);
    return;
}

int temp=st.top();
st.pop();
insert_bottom(st,num);           //-------recursion
st.push(temp);                   //------backtracking
}

void reverse_stack(stack<int>& st){
    if(st.empty()){
        return;
    }
    int temp=st.top();
    st.pop();

    reverse_stack(st);
    insert_bottom(st,temp);

}
void insert_sorted(stack<int>& st,int num){
    if(st.empty()|| st.top()<num){
        st.push(num);
        return;
    }

    int temp=st.top();
    st.pop();
    insert_sorted(st,num);
    st.push(temp);
}

void sort(stack<int>& st){
if(st.empty()){
    return;
}

int temp=st.top();
st.pop();

sort(st);

insert_sorted(st,temp);
}


int main(){
    stack<int> st;
    st.push(10);
    st.push(29);
    st.push(3);
    st.push(15);
    st.push(6);
   
    // int num=100;
    // insert_bottom(st,num);

    // reverse_stack(st);

    // int num=29;
    // insert_sorted(st,num);

    sort(st);

    while(!st.empty()){
        cout<<st.top()<<"->";
        st.pop();
    }
    cout<<endl;

}

#include<iostream>
using namespace std;

class stack{
    int top1;
    int top2;
    int size;
    int *arr;
public:
stack(int size){
        arr = new int[size];
        for(int i=0;i<size;i++){
            arr[i]=0;
        }
        this->size = size;
        top1=-1;
        top2=size;
}
void push1(int data){
    if(top2-top1==1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    else{
    top1++;
    arr[top1]=data;
    }
}
void push2(int data){
    if(top2-top1==1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    else{
       top2--;
       arr[top2]=data;
    }
}

void pop1(){
    if(top1==-1){
        cout<<"Stack Underflow"<<endl;
        return;
    }
    else{
       arr[top1]=0;
       top1--;
    }
}
void pop2(){
    if(top2==size){
        cout<<"Stack Underflow"<<endl;
        return;
    
    }else{
        arr[top2]=0;
        top2++;
    }
}

void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"->";
    }
    cout<<endl;
}
};

int main(){
    stack st(6);
    // st.print();
    st.push1(10);
    st.print();

    st.push2(80);
    st.push2(70);
    st.push2(60);

    st.print();
    st.push1(20);
    st.push2(30);
    st.print();

    st.push1(45);
}
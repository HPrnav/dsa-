#include<iostream>
using namespace std;
class cqueue{
    int * arr;
    int size;
    int front;
    int rear;
    public:
    cqueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
        for(int i=0;i<size;i++){
            arr[i]=0;
        }
    }
    void push(int num){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=num;
         }
        else if(front==0 && rear==size){
            cout<<"Queue is full"<<endl;
        }
        else if(rear== front-1){
            cout<<" dont have space for ward"<<endl;
        }
        else{
            rear=(rear+1)%size;
             arr[rear%size]= num;
        }

    }

    void pop(){
         if(front==-1 && rear==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front%size]=-1;
            front=(front+1)%size;
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<"_";
        }
        cout<<endl;
    }
    
    void  get_front(){
        if(front==-1 && rear==-1){
        cout<<"QUEUE IS EMPTY";
        }
        else {
            cout<<arr[front]<<endl;
        }
    }
    void get_rear(){
         if(front==-1 && rear==-1){
        cout<<"QUEUE IS EMPTY";
        }
        else {
            cout<<arr[ rear]<<endl;
        }
    }

};

int main()
{
    cqueue cq(5);
    cq.push(23);
    cq.push(23);
    cq.push(23);
    cq.push(99);
    cq.push(99);
    cq.print();
     cq.pop();
    cq.print();
    // cq.push(99);
    // cq.print();
    // cq.push(99);
    // // cq.print();
    cq.get_front();
    cq.get_rear();
  
}
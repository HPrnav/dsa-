#include<iostream>
using namespace std;

class queue{
    public :
    int* arr;
    int size;
    int front=-1;
    int rear=-1;

    queue(int size){
        this->size=size;
        arr = new int[size];
        for(int i=0;i<size;i++){
        arr[i]=0;
        }
        front=-1;
        rear=-1;
    }

    void push(int val){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }else{
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        if(front==-1 && rear==-1){
            cout<<"Queue is Empty";
        }
        else if(rear==front){
        arr[rear]=-1;
        rear=-1;
        front=-1;
        }
        else{
         arr[front]=-1;
         front++;
        }
    }

    void length(){
     if(front==-1 && rear==-1) cout<<"size is:"<<0<<endl;
     else{
        cout<<"Size of Queue: "<<rear-front+1<<endl;
     }
      }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<"_";
        }
            cout<<endl;
    }

     void get_front(){
        if(front==-1){
            cout<<"No Element In the queue"<<endl;
         }
        else {
             cout<<arr[front]<<endl;
        }
    }


     void get_rear(){
        if(rear==-1){
            cout<<"No Element in the queue"<<endl;
        }
        else{
            cout<<arr[rear]<<endl;
        }
     }

};
int main(){
    queue q(5);
    q.push(5);
    q.length();
    q.print();
    q.pop();
    q.print();
    q.get_front();
    q.push(5);
    q.get_front();
    q.get_rear();
    
}
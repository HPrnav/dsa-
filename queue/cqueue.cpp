#include<iostream>
using namespace std;
class cqueue{
    public:
    int size ;
    int *arr;
    int front ;
    int rear;

    cqueue(int size){
        this->size=size;
        front=-1;
        rear=-1;
        arr = new int[size];
        for(int i=0;i<size;i++){
            arr[i]=0;
        }
    }

    void push(int num){
         if(front ==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=num;
        }
        else if(front ==0 && rear==size-1){
            cout<<"overflow condition";
        }
        else if(front!=0 && rear==size-1){
            rear=0;
            arr[rear]=num;
        }
        else if( rear== front-1){
            cout<<"overflow  condition"<<endl;
        }
        else{
            rear++;
            arr[rear]=num;
        }

    }
    void pop(){
        if(rear==-1 && front==-1 ){ //underflow
            cout<<"underflow condition";
        }
        else if(rear==front){   //single element
        arr[ front]=-1;
        rear=-1;
        front=-1;
        }
        else if(front==size-1){
            arr[front]=-1;
            front =0;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    void get_top(){
        if(front==-1 && rear==-1){
            
        }
    }

void print(){
    cout<<"rear"<<rear<<"front"<<front<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"_";
    }
    cout<<endl;
}


};

int main(){
    cqueue cq(5);

    cq.push(10);
    cq.push(10);
    cq.push(10);
    cq.push(10);
    cq.push(10);
    cq.print();
    cq.pop();
    cq.pop();
    cq.print();
    cq.push(10);
    cq.print();
    cq.print();
    cq.push(20);
    cq.print();

    

}
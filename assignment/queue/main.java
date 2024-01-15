import java.util.*;

class queue{
    private int front,size,rear;
    private int[] arr;

    public queue(int size ){
        this.size=size;
        arr = new int[size];
        front=-1;
        rear=-1;
    }
    
    public void push(int num){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=num;
         }
         else if(rear==front-1){
            System.out.println("stack is full");
         }
         else if(front==0 && rear==size-1){
            System.out.println("stack is full");
         }
         else{
            rear=(rear+1)%size;
            arr[rear%size]=num;
         }
    }

    public void pop(){
        if(front==-1 && rear==-1){
            System.out.println("underflow condition");
        }
        else{
            arr[front]=-1;
            front=(front+1)%size;
        }
    }
    public void print(){
        for(int i=0;i<size;i++){
            System.out.print(arr[i]+"_");
        }
    }
    public void get_front(){
        if(front==-1 && rear==-1){
            System.out.println("queue is empty");
        }
        else{
            System.out.println("FRONT:"+arr[front]);
        }
    }
    public void  get_rear(){
        if(front==-1 && rear==-1){
            System.out.println("queue is empty");
        }
        else{
            System.out.println("REAR:"+arr[rear]);
        }
    }


}

public class main{
    public static void main(String[] args){
        queue q =new queue(6);
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        q.push(6);
        q.pop();
        q.pop();
        q.pop();
        q.pop();
        q.pop();
        q.push(7);
        q.push(7);
         q.pop();
        q.pop();
      
        q.print();





    }
}
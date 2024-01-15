#include<iostream>
using namespace std;
class k_queue{
    public:
    int n,k,freespot;
    int *front,*arr,*rear,*next;
    k_queue(int n_,int k_):n(n_),k(k_),freespot(0){
        arr=new int[n];
        next=new int [n];
        front=new int [k];
        rear=new int [k];
        for(int i=0;i<n;i++){
            next[i]=i+1;
            arr[i]=0;
        }
        next[n-1]=-1;
        for(int i=0;i<k;i++){
            front[i]=-1;
            rear[i]=-1;
        }
    }
         bool push(int n,int qi){
        if(freespot==-1){
            return -1;
        }
        int index=freespot;
        freespot=next[index];
        if(front[qi]==-1){
            front[qi]=index;
        }
        else{
            next[rear[qi]]=index;
        }
        next[index]=-1;
        arr[index]=n;
        rear[qi]=index;

            return  1;

         }

         int  pop(int qi){

            if(front[qi]==-1){
                return -1;
            }

            int index=front[qi];
            front[qi]=next[index];
            next[index]=freespot;
            freespot=index;

             return arr[index];
        }
};


int main(){
k_queue q(8,3) ;
cout<<q.push(3,1);
cout<<q.push(5,1);
cout<<q.push(2,1);
cout<<q.push(3,2);
cout<<q.pop(1);
cout<<q.pop(1);


}
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
         this ->data=0;
        this->next=NULL;
    }
    Node(int data){
         this ->data=data;
        this->next=NULL;
    }


};

void printLL(Node* head){
Node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" -> ";
    temp=temp->next;
}
    cout<<endl;
}

int  count(Node *head){
Node* temp=head;
int val=0;
while(temp!=NULL){
    temp=temp->next;
    val++;
} 
cout<<"There are "<<val<<" element in the Linked List"<<endl;
return val;
}


void insert_head(Node* &head,int data){

if(head==NULL){
     Node* brandnew= new Node(data);
     head=brandnew;
}else{
Node* brandnew= new Node(data);
brandnew->next=head;
head=brandnew;
}
}

void insert_tail(Node* &head,Node* &tail,int data){
if(head==NULL){
Node* brandnew=new Node(data);
tail=brandnew;
head=brandnew;
}
else{
Node* brandnew=new Node(data);
tail->next=brandnew;
tail=brandnew;
}
}
 
void Insert_at_postn(Node* &head,Node* &tail,int data,int position){
    Node* temp=head;
    int len=count(head);

if(position== 1){
insert_head(head,data);
}
else if(position>len){
insert_tail(head,tail,data);
}
else{
Node* brandnew=new Node();
Node* prev= NULL;
Node* curr=head;
while(position!=1){
position--;
prev=curr;
curr=curr->next;
}
prev->next=brandnew;
brandnew->data=data;
brandnew->next=curr;

}
}


int main(){
 
Node* one =new Node(1);
Node* two=new Node(2);
Node* three =new Node(3);
Node*  four =new Node(4);
Node*  five =new Node(5);

one->next=two;
two->next=three;
three->next=four;
four->next=five;

Node* head=one;  
// printLL(head);
// count(head);

// insert_head(head,0);
// printLL(head);

Node* tail=five;
// insert_tail(head,tail,6);
// printLL(head);


Insert_at_postn(head,tail,50,3);
printLL(head);
 }
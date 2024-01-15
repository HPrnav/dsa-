#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        data=0;
        next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void printLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int  count(Node* head){
    Node*  temp=head;
    int val=1;
    while(temp!=NULL){
        temp=temp->next;
        val++;
    }
    return val;
}


void delete_LL(Node* &head,Node* &tail,int pos){
    int len=count(head);
    if(head==NULL){
        cout<<"element cannot be deleted linked list is empty"<<endl;
    }
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else if(pos==len){
        Node* pre=head;

        
        while(pre->next!=NULL){
        //the loop will stop before last element so our pointer is at 1 step before last node
            pre=pre->next;
        }
        pre->next=NULL;
        delete tail;
        tail=pre;
    }
    else{
        Node* pre=NULL;
        Node* curr=head;
        while(pos!=1){
            pos--;
            pre=curr;
            curr=curr->next;
        }
        pre->next=curr->next;
        curr->next=NULL;
        delete curr;
        }

    }

int main(){
    Node* one=new Node(1); 
    Node* two=new Node(2);
    Node* three=new Node(3);
    Node* four=new Node(4);
    Node* five=new Node(5);
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=five;

    Node* head=one;
    Node* tail=five;
    cout<<"the length of ll is "<<count(head)<<endl;
    printLL(head);
    delete_LL(head,tail,1);
    printLL(head);
   
}
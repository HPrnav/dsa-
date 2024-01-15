#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

};

void printDLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int  count(Node* head){
    Node* temp =head;
    int var=0;
    while(temp!=NULL){
        var++;
        temp=temp->next;
    }
     return var;
}

void insert_head(Node* &head,Node* &tail,int data){
    if(head==NULL){
    Node* brandnew=new Node(data);
        head=brandnew;
        tail=brandnew;
    }else{
        Node* brandnew=new Node(data);
        head->prev=brandnew;
        brandnew->next=head;
        head=brandnew;
    }
}

void insert_tail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* brandnew=new Node(data);
        head=brandnew;
        tail=brandnew;
    }
    else{
        Node* brandnew=new Node();
        brandnew->data=data;
        brandnew->prev=tail;
        tail->next=brandnew;
        tail=brandnew;
    }
}

void insert_position(Node* &head,Node* &tail,int data,int position){
    if(head==NULL){
        Node* brandnew=new Node();
        brandnew->data=data;
        head=brandnew;
        tail=brandnew;
    }
    else{
        if(position==1){
            insert_head(head,tail,data);
        }
        else if(position==count(head)){
            insert_tail(head,tail,data);
        }
        else{
        Node* brandnew=new Node(data);
        Node* curr_node=head;
        Node* prev_node=NULL; 
         while(position!=1){
             prev_node=curr_node;
             curr_node=curr_node->next;
             position--;
        }
         prev_node->next=brandnew;
        brandnew->prev=prev_node;
        brandnew->next=curr_node;
        curr_node->prev=brandnew;
        }
    }
} 



int main(){
     Node* one= new Node(5);
     Node* head=one;
     Node* tail=one;
     count(head);
     printDLL(head);
     insert_head(head,tail,4);
     insert_head(head,tail,3);
     insert_head(head,tail,2);
     insert_head(head,tail,1);
     insert_head(head,tail,0);
     printDLL(head);
      insert_tail(head,tail,6);
     insert_tail(head,tail,7);
     insert_tail(head,tail,8);
     insert_tail(head,tail,9);
     printDLL(head);

     insert_position(head,tail,99,6);
     printDLL(head);

}
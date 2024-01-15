#include<iostream>
using namespace std;
class Node{
    public:
    int data;
     Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
     }
    Node(int data){
        this->data=data;
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



 bool check_cycle(Node* &head){
Node* slow;
Node* fast;
slow =head;
fast =head;
while(fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
        if(fast==slow){
             return true;
        }
    }
    else{
      return false;
    }
}
    return false;
 }


Node* startOFcycle(Node* &head){
Node* slow;
Node* fast;
slow =head;
fast =head;

while(fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
        if(fast==slow){
              break;
        }
    }
}
slow=head;
while(slow!=fast){
    fast=fast->next;
    slow=slow->next;
}
return slow;
}

void removeCycle(Node *&head) {
Node* slow=head;
Node* fast=head;
 
while(fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
        if(fast==slow){
              break;
        }
    }
}
slow=head;          //another method to remove cycle in linked list
slow=slow->next;    //we will place our temp at fast and increment fast and slow so now our pointer is one 
Node* temp=fast;    // one step back of fast and as soon as we got the fast ans start at same position we will 
slow=slow->next;    //make it null
fast=fast->next;

while(fast!=slow){
fast=fast->next;      
temp=temp->next;
}
temp->next=NULL;
// slow=head;
// while(slow!=fast){
//     fast=fast->next;
//     slow=slow->next;
// }
}

int main(){
 
Node* one =new Node(1);
Node* two=new Node(2);
Node* three =new Node(3);
Node* four =new Node(4);
Node* five =new Node(5);
Node* six =new Node(6);
Node* seven =new Node(7);

one->next=two;
two->next=three;
three->next=four;
four->next=five;
five->next=six;
six->next= seven;
seven->next=four;

Node* head=one; 
if(check_cycle(head)){
    cout<<"Cycle is present"<<endl;
    Node* start=startOFcycle(head);
    cout<<start->data<<endl;
}else{
cout<<"No cycle in the list"<<endl;
}

removeCycle(head);
printLL(head);

 return 0;


}



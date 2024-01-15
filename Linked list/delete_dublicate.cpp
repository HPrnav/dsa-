#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

 void insert_tail(ListNode* &head,ListNode* &tail,int data){
if(head==NULL){
ListNode* brandnew=new ListNode(data);
tail=brandnew;
head=brandnew;
}
else{
ListNode* brandnew=new ListNode(data);
tail->next=brandnew;
tail=brandnew;
}
}
 
    ListNode* deleteDuplicates(ListNode* &head) {
        ListNode* temp=head;
        if(temp==NULL || temp->next==NULL){
            return head;
        }
        while(temp!=NULL){
        if((temp!=NULL && temp->next!=NULL)&& temp->next->val==temp->val){
        ListNode* ahead=temp->next;
            temp->next=ahead->next;
            ahead->next=NULL;
            delete ahead;
        }
        else{
        temp=temp->next;
        }
        }
        return head;
 }
 void printlist(ListNode* &head){
ListNode* temp=head;
while(temp!=NULL){
    cout<<temp->val<<"->";
    temp=temp->next;
 }
 }

    int main(){

ListNode* one =new ListNode(1);
ListNode* head=one;
ListNode*  tail=one;

insert_tail(head,tail,1);
insert_tail(head,tail,2);
insert_tail(head,tail,2);
insert_tail(head,tail,4);
insert_tail(head,tail,4);
insert_tail(head,tail,5);
insert_tail(head,tail,6);

printlist(head);
cout<<endl;
deleteDuplicates(head);
printlist(head);
    return 0;
}
 
#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
    public:
int val;
Node* right;
Node* left;
Node(int val){
    this->val=val;
    this->right=NULL;
    this->left=NULL;
}
};

Node* create_node( ){
cout<<"Enter the data for  node"<<endl;
int data;
cin>>data;
if(data==-1){
    return NULL;
}
Node* root=new Node(data);
cout<<"left of "<<root-> val;
 root->left=create_node();  //creating left node
cout<<" right of "<<root->val;
 root->right=create_node();  //creating right node
}
 


void level_order(Node* root){
 queue<Node*>q ;
 q.push(root);
 q.push(NULL);
 while(q.size()>1){
    Node* front=q.front();
    q.pop();

     if(front==NULL){
        cout<<endl;
        q.push(NULL);
    }
    else{
    cout<< front->val;
    if( front->left!=NULL){
    q.push( front->left);
    }
    if( front->right!=NULL){
    q.push( front->right);
    }
    }
 }
}


 void top_view(Node* root){
 queue<pair<Node* ,int>>q;
 map<int,int> hdTonode;
 q.push(make_pair(root,0));
 while(!q.empty()){
    pair<Node* ,int>  temp=q.front();
    q.pop();
    Node*  frontNode= temp.first;
    int hd= temp.second;

    if(hdTonode.find(hd)==hdTonode.end()){
        hdTonode[hd]=frontNode->val;
    }

    if( frontNode->left!=NULL){
        q.push(make_pair(root->right,hd-1));
    }
    if( frontNode->right!=NULL){
        q.push(make_pair(root->left,hd+1));
    }
 }
 for(auto i:hdTonode){
    cout<<i.second;
 }
}

int main(){
 Node* root =create_node();
 level_order(root);
top_view(root);
}
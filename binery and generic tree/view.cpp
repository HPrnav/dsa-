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

void right_view(Node* root,int level, vector<int> &right ){
if (root==NULL) return;

if(level == right.size()) {right.push_back(root->val);}
right_view(root->right,level+1,right);
right_view(root->left,level+1,right);
}


void left_view(Node* root,int level, vector<int> &left ){
if (root==NULL) return;
if(level ==  left.size()) {left.push_back(root->val);}
right_view(root->right,level+1,left);
right_view(root->left,level+1,left);
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
    cout<<i.second<<endl;
 }
}

int main(){
 Node* root =create_node();
 vector<int> right;
 vector<int> left;
level_order(root);

// cout<<"TOP VIEW IS:";
// top_view(root);


cout<<"RIGHT  VIEW IS:";
right_view(root,0,right);
for(auto i:right) {cout<<i<<endl;}

cout<<"LEFT VIEW IS ";
right_view(root,0,left);
for(auto i:left) {cout<<i<<endl;}


// 6 5 4 -1 -1 3 -1 -1 7 8 -1 -1 9 -1 -1

}
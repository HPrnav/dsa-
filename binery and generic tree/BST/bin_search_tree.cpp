#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node * right;
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};



Node*  insert_node(Node* root,int data){
if(root==NULL) {
    root=new Node(data);
    return root;
}

if(data<root->data){
    root->left=insert_node(root->left,data);
}
else{
    root->right=insert_node(root->right,data);
}
}

void create_tree(Node* &root){
int data;
cout<<"Enter data";
cin>>data;
while(data!=-1){
    root=insert_node(root,data);
    cout<<"Enter data:";
    cin>>data;
}
}


void level_order(Node* root) {
queue<Node*> q;
q.push(root);
q.push(NULL);
while(!q.empty()){
    Node* temp=q.front();
    q.pop();

    if(temp==NULL){
        cout<<endl;
    if(!q.empty()) {
    q.push(NULL);
    }
    }
    else{
        cout<< temp->data;
        if( temp->left!=NULL){
            q.push(temp->left);
                }
        if( temp->right!=NULL){
            q.push(temp->right);
        }
    }
}
}


void pre_order(Node* root ){
    if(root==NULL) return ;
    cout<<root->data;
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(Node* root){
if(root==NULL) return;
in_order(root->left);
cout<<root->data;
in_order(root->right);
}
 
void post_order(Node* root){
    if(root==NULL) return;
    post_order(root->left);
    post_order(root->right);
    cout<<root->data;
}

Node*  max_element(Node* root){
if(root==NULL) return NULL;

while(root->right!=NULL){
    root=root->right;
}
// cout<<root->data<<endl;
return root;

}

void min_element(Node* root){
if(root==NULL) return;

while(root-> left!=NULL){
    root=root->left;
}
cout<<root->data<<endl;
}

bool search(Node* root,int target){
if(root==NULL) return false;

if(root->data==target) return true;

bool leftans=false;
bool rightans=false;
if(target > root->data){
  rightans=search(root->right,target);
}
else{
  leftans=search(root->left,target);
}

return leftans||rightans;

}


Node* delete_BST(Node* root,int target){
    if(root==NULL) return root;  //base condition
    if(root->data==target) {     //if taget is found
    //four condition
         if(root->left==NULL && root->right==NULL){
             delete root;
             return NULL;
         }
         else if (root->left!=NULL && root->right==NULL){
             Node* subTree=root->left;
             delete root;
             return subTree;
         }
         else if(root->left==NULL && root->right!=NULL){
             Node* subTree =root->right;
             delete root;
             return subTree;
         }
         else{  //root->lef!=NULL && root->right!=NULL
             Node* maxi=max_element(root->left);
             root->data=maxi->data;
             root->left=delete_BST(root->left,maxi->data);
         }
    }
    else if(target > root->data ){
        root->right=delete_BST(root->right,target);
    }
    else{
        root->left=delete_BST(root->left,target);
    }

}

int main(){
Node* root=NULL;
create_tree(root);
level_order(root);

// cout<<"preorder:"<<endl;
// pre_order(root);
// cout<<"inorder:"<<endl;
// in_order(root);
// cout<<"postorder:"<<endl;
// post_order(root);

// cout<<"max element is:";
// Node* maxi=max_element(root);
// cout<<maxi->data;

// cout<<"min element is:";
// min_element(root);


// cout<<"enter the target value";
// int target;
// cin>>target;
// while(target!=-1){
// bool ans=search(root,target);
// if(ans){
//     cout<<"Target found"<<endl;
// }
// else{
//     cout<<"Not found"<<endl;
// }
// cout<<"enter the value";
// cin>>target;
// }

cout<<"Enter the node to be deleted"<<endl;
int node;
cin>>node;
while(node!=-1){
    root=delete_BST(root,node);
    level_order(root);
    cout<<"Enter the node to be deleted"<<endl;
     cin>>node;
}

}
//travelling anti clock wise along the boundry of binery tree
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public :
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
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
cout<<"left of "<<root->data;
 root->left=create_node();  //creating left node
cout<<" right of "<<root->data;
 root->right=create_node();  //creating right node
}

void level_order(Node* root){
    queue<Node*> q;               //steps for level order traversal
    q.push(root);                // 1.push root node and null to queue
    q.push(NULL);                
    while(q.size()>1){
        Node* front=q.front();  // 2.access current node and pop it.
        q.pop();
        if(front==NULL){
            cout<<endl;         // 3. if node is null push nulll to queue
            q.push(NULL);
        }
        else{
        cout<<front->data; // 4. else if mot null then check if left and right node is present to the 
        if(front->left!=NULL){   //the current node and push that.
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
        }
    }
}



 void boundry_left(Node*  root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        return ;
    }
    cout<<root->data;

    if(root->left!=NULL){
    boundry_left(root->left);
    }
    else{
        boundry_left(root->right);
    }
}

void boundry_leaf(Node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        cout<<root->data;
    } 
    boundry_leaf(root->left);
    boundry_leaf(root->right);
}


void boundry_right(Node* root){
    if(root==NULL) return;

    if(root->right!=NULL){
    boundry_right(root->right);
    }
    else{
        boundry_right(root->left);
    }
    cout<<root->data;

}

void boundry(Node* root){
    cout<<root->data;
    boundry_left(root->left);
    boundry_leaf(root);
     boundry_right(root->right);
    // }
    // else{
    //     boundry_right(root->left);
    // }

}



int main(){

    Node* root=create_node();
    level_order(root);
    cout<<endl;
    cout<<"";
    boundry(root);
 
 

}
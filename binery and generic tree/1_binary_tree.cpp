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

void pre_order(Node* root){

if(root==NULL){
    return;
}
cout<<root->data<<endl;
pre_order(root->left);
pre_order(root->right);
}

void in_order(Node* root){
    if(root==NULL){
        return;
    }
    in_order(root->left);
    cout<<root->data<<"  ";
    in_order(root->right);
}

void post_order(Node* root){
    if(root==NULL){
        return;
    }
    
post_order(root->left);
post_order(root->right);
cout<<root->data;

}
void level_order(Node* root){
    queue<Node*>q;               //steps for level order traversal
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
    int maxDepth(Node * root){
        if(root==NULL) return 0;
        int right=maxDepth(root->left);
        int left=maxDepth(root->right);
        int ans=1+max(left,right);
        return ans;
    }

int main(){
 Node* root=create_node();
//pre_order(root);
level_order(root);
//  cout<<"max depth or height of binary tree is:"<<maxDepth(root);

}
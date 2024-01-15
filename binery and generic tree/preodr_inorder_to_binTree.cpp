#include<bits/stdc++.h>
#include<queue>
using namespace std;
class Node{
    public:
int val;
Node* left;
Node* right;
Node(int val){
this->val=val;
this->left=NULL;
this->right=NULL;
}
};

// Node* createNODE(){
// cout<<"enter the value for node";
// int data;
// cin>>data;
// if(data==-1){
//     return NULL;
// }
// else{
// Node* root=new Node(data);
//     cout<<" left of "<<root->val<<endl;
//     root->left=createNODE();
//     cout<<"right of"<<root->val<<endl;
//     root->right=createNODE();
//     // return root;
//  }
// }

 
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
        cout<<front->val; // 4. else if mot null then check if left and right node is present to the 
        if(front->left!=NULL){   //the current node and push that.
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
        }
    }
}
void create_map(int inorder[],int size,map<int,int>&valTOidx){
for(int i=0;i<size;i++){
    int data=inorder[i];
    valTOidx[data]=i;
}
}

Node* create_Tree(int preorder[],int inorder[],int size,int &preidx,int inodrStart,int inodrEnd,map<int,int>valTOidx){

if(preidx>=size || inodrStart>inodrEnd){
    return NULL;
    }
     int element=preorder[preidx];
     preidx++;

     Node* root=new Node(element);
     int  position=valTOidx[element];
     root->left=create_Tree(preorder,inorder,size,preidx,inodrStart,position-1,valTOidx);
     root->right=create_Tree(preorder,inorder,size,preidx,position+1,inodrEnd,valTOidx);
     return root;
}




int main(){
// Node* root=createNODE();


int preorder[]={2,8,10,6,4,12};
int inorder[]={10,8,6,2,4,12};
int size=6;
int preidx=0;
int inodrStart=0;
int inodrEnd=5;
map<int,int> valTOidx;
create_map(inorder,size,valTOidx);

Node* root=create_Tree(preorder,inorder,size,preidx,inodrStart,inodrEnd,valTOidx);


level_order(root);

}
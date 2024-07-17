//see copy pseudo code and explanation-
#include<iostream>
using namespace std;
#include"binaryTree.h"
#include<queue>
BinaryTreeNode<int>* takeInputlevelWise(){
    int rootdata;
    cout<<"Enter root data: ";
    cin>>rootdata;

    if (rootdata==-1){//not necessary here.
        return NULL;
    }
    BinaryTreeNode<int>* root =new BinaryTreeNode<int>(rootdata);
    //queue creation
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
    BinaryTreeNode<int>* front = pendingNodes.front();
    pendingNodes.pop();
    cout<<"enter left child of "<<front->data<<endl;
    int leftChild;
    cin>>leftChild;
    if(leftChild!=-1){
    BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChild);
    front->left=child;
    pendingNodes.push(child);
    } 

    cout<<"enter right child of "<<front->data<<endl;
    int rightChild;
    cin>>rightChild;
    if(rightChild!=-1){
    BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChild);
    front->right=child;
    pendingNodes.push(child);
    } 
}
    return root;
}
void printTree(BinaryTreeNode <int>* root){

    if(root==NULL){
        return;
        };
    cout<<root->data;

    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
    cout<<"R"<<root->right->data;
    }
    cout<<endl;

    printTree(root->left);
    printTree(root->right);
};

int nodeCount(BinaryTreeNode<int>* root){
    if(root==NULL){
    return 0;
    };

    return 1+
    nodeCount(root->left) +
    nodeCount(root->right);
}
int main(){
    BinaryTreeNode <int>* root= takeInputlevelWise();
    printTree(root);
    cout<<endl<<"No of nodes: "<<nodeCount(root);
};

// 1 2 3 5 6 4 -1 -1 -1 -1 -1 -1 -1



// output 
// Enter root data: 1
// enter left child of 1
// 2
// enter right child of 1
// 3
// enter left child of 2
// 5
// enter right child of 2
// 6
// enter left child of 3
// 4
// enter right child of 3
// -1
// enter left child of 5
// -1
// enter right child of 5
// -1
// enter left child of 6
// -1
// enter right child of 6
// -1
// enter left child of 4
// -1
// enter right child of 4
// -1
// 1L2R3
// 2L5R6
// 5
// 6
// 3L4
// 4

// No of nodes: 6
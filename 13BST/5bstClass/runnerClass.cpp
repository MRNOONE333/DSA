using namespace std;
#include<iostream>
#include "binaryTreeNode.h"
#include"bstClass.h"
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


int main(){
    BinaryTreeNode<int>* root =  takeInputlevelWise();
    printTree(root);

    BST tree;
    tree.root = root;
    cout<<"has data:"<<tree.hasData(6);
}

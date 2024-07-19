#include <iostream>
using namespace std;
#include "binaryTree.h"
#include<queue>
#include <climits> 

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




int maximum(BinaryTreeNode<int>* root){
        if (root == NULL) {
        return INT_MIN;
    }

    return  max(root->data,max(maximum(root->left),maximum(root->right)));
}

int minimum(BinaryTreeNode<int>* root){
    if (root == NULL) {
        return INT_MAX;
    }

    return  min(root->data,max(minimum(root->left),minimum(root->right)));
}


bool isBST(BinaryTreeNode<int>* root){
    if(root == NULL)return 0;

    bool output = (maximum(root->left)) && (minimum(root->right) && isBST(root->left) && isBST(root->right));
    return output; 
}

int main(){
    BinaryTreeNode <int>* root= takeInputlevelWise();
    printTree(root);
    bool result = isBST(root);
    cout << (result ? "The tree is a BST." : "The tree is not a BST.") << endl;

};

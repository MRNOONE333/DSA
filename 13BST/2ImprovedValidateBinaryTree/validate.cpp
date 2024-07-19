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


bool isBstImprovedComplexity(BinaryTreeNode<int>* root,int min = INT_MIN , int max= INT_MAX){
    if(root == NULL)return true;//base case
    
    if(root->data<min || root->data>max)return false; // small job

    // commented oto make  readibility beetter but wated to wrap in 3 lines.
    // bool isleftok=isBstImprovedComplexity(root->left,min,root->data-1);
    // bool isrightOK=isBstImprovedComplexity(root->right,root->data,max);

    return isBstImprovedComplexity(root->left,min,root->data-1) && isBstImprovedComplexity(root->right,root->data,max); 
}

int main(){
    BinaryTreeNode <int>* root= takeInputlevelWise();
    printTree(root);
    bool result = isBstImprovedComplexity(root);
    cout << (result ? "The tree is a BST." : "The tree is not a BST.") << endl;

};
//output
// Enter root data: 1
// enter left child of 1
// 2
// enter right child of 1
// 3
// enter left child of 2
// -1
// enter right child of 2
// -1
// enter left child of 3
// -1
// enter right child of 3
// -1
// 1L2R3
// 2
// 3
// The tree is not a BST.


//

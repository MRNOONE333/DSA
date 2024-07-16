#include<iostream>
using namespace std;
#include"binaryTree.h"

BinaryTreeNode<int>* takeInput(){
    int rootdata;
    cout<<"Enter data: ";
    cin>>rootdata;

    if (rootdata==-1){
        return NULL;
    }
    BinaryTreeNode<int>* root =new BinaryTreeNode<int>(rootdata);
    BinaryTreeNode<int>* leftChild =takeInput();
    BinaryTreeNode<int>* rightChild =takeInput();
    root->left=leftChild;
    root->right=rightChild;

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
    BinaryTreeNode <int>* root= takeInput();
    printTree(root);
};

// output 
// Enter data: 1
// Enter data: 2
// Enter data: 3
// Enter data: -1
// Enter data: -1
// Enter data: 4
// Enter data: 5
// Enter data: -1
// Enter data: -1
// Enter data: -1
// Enter data: -1
// 1L2
// 2L3R4
// 3
// 4L5
// 5
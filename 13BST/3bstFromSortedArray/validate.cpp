#include <iostream>
using namespace std;
#include "binaryTree.h"
#include<queue>
#include <climits> 

template<typename T>
BinaryTreeNode<T>* sortedArrayTOBst(T arr[],int start,int end){
    if(start>end)return nullptr;

    int mid = (start+end)/2;
    BinaryTreeNode<T>* root = new BinaryTreeNode<T> (arr[mid]);
    
    root->left=sortedArrayTOBst(arr,start,mid-1);
    root->right=sortedArrayTOBst(arr,mid+1,end);

    return root;
} 


template<typename T>
void printTree(BinaryTreeNode <T>* root){

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
    int sortedArray []={1,2,3,4,5,6,7};
    int n = sizeof(sortedArray)/sizeof(sortedArray[0]);

    BinaryTreeNode<int>* root = sortedArrayTOBst(sortedArray,0,n-1); 
   printTree(root);

    return 0;
};



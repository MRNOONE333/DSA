//see copy pseudo code and explanation-
#include<iostream>
using namespace std;
#include"binaryTree.h"

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

BinaryTreeNode<int>* treeHelper(int *in,int * pre,int inS, int inE, int preS, int preE ){
    // 1-base case,root , 2- 8vars, define root and recursion on left and right subtree.
    
    //base
    if(inS>inE){
        return NULL;
    }
    //root
    int rootData = pre[preS];


    // 8 vars
    // for loor to find index of center root in inOrder.
    int rootIndex=-1;
    for(int i=inS;i<=inE;i++){
        if (in[i]==rootData){
        rootIndex = i;
        break;
        };
    };

    int LpreS = preS+1;
    int LinS  = inS;
    int LinE = rootIndex-1;
    int LpreE = LinE-LinS +LpreS;

    int RpreE = preE;
    int RinE = inE;
    int RinS = rootIndex+1;
    int RpreS = LpreE+1; 
    

    // root define and resursion call
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left=treeHelper(in,pre, LinS,LinE,LpreS,LpreE);
    root->right=treeHelper(in,pre, RinS,RinE,RpreS,RpreE);
    return root;   
};

BinaryTreeNode<int>* builtTreeUsingInOredeAndPreOrder(int* in , int* pre , int size){
    return treeHelper(in,pre,0,size-1,0,size-1);
};

int main(){
    int in []={4,2,5,1,8,6,9,3,7};
    int pre []={1,2,4,5,3,6,8,9,7};
    BinaryTreeNode<int>* root =builtTreeUsingInOredeAndPreOrder(in,pre,9);
    printTree(root);
};

// output 
// 1L2R3
// 2L4R5
// 4
// 5
// 3L6R7
// 6L8R9
// 8
// 9
// 7
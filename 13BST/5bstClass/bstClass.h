#ifndef BSTCLASS_H
#define BSTCLASS_H

#include "binaryTreeNode.h"
using namespace std;
#include<iostream>

class BST{
    public:
    BinaryTreeNode<int>*  root;

    public:
    BST(){
        root = NULL;
    }
    ~BST(){
        delete root;
    }

    private:
    bool hasData(int data,BinaryTreeNode<int>* node){// helper function
        if(node == NULL) return false; //base

        if(node->data == data)return true;

        else if(data< node->data ){
            return (data,node->left);
        }else{
            return hasData(data, node->right);
        }
    }

    public:
    bool hasData(int data){
        return hasData(data,root);
    }
};


#endif 
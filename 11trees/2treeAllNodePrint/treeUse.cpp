#include <iostream>
using namespace std;
#include "treeNode.h"


// recursive function to print-
void printTree(TreeNode<int> * root){

    // no specific base case used as a node behaves like a base case in generic trees.

    // to avoid segmentation fault
    //edge case
    if (root==NULL){
        return;        
    }

    cout<< root->data<<": ";
    // to print the childs, with parent.
    for(int i=0; i<root->childrens.size(); i++){
        cout<<root->childrens[i]->data<<",";
    }
    cout<<endl;
    // print data of childs 
    for(int i =0; i<root->childrens.size(); i++){    
        //loop will run i times , i== no of cildren
        printTree(root->childrens[i]);   // recursion.
        //childrens[i] , index in vector , where the data of children is stored.

    }
}

int main(){
    TreeNode<int> * root =  new TreeNode <int>(1);   
    TreeNode<int> * node1 =  new TreeNode <int>(2);   
    TreeNode<int> * node2 =  new TreeNode <int>(3);   

    TreeNode<int> * node3 =  new TreeNode <int>(4);   
    TreeNode<int> * node4 =  new TreeNode <int>(5);   


    root->childrens.push_back(node1);
    root->childrens.push_back(node2);

    node1->childrens.push_back(node3);
    node1->childrens.push_back(node4);

    printTree(root);
    
}

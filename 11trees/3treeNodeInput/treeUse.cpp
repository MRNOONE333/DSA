#include <iostream>
using namespace std;
#include "treeNode.h"

TreeNode  <int> * takeInput(){
    int rootData;
    cout<<"Enter data :";
    cin>>rootData;
    TreeNode<int> * root = new TreeNode<int> (rootData);

    int n;
    cout<<"No of childrens of"<<rootData<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        TreeNode <int> * child = takeInput();//input
        cout<<endl<<"child added"<< child->data <<endl;

        root->childrens.push_back(child);// push
        cout<<endl<<"connection made"<< child->data <<endl;
        
    }
    return root;
}


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
        //loop will run i times , i== no of children
        printTree(root->childrens[i]);   
        //childrens[i] , index in vector , where the data of children is stored.

    }
}

int main(){
    TreeNode<int> * root = takeInput();
    printTree(root);
}


// output
// data :1
// No of childrens of1
// 3
// Enter data :2
// Enter data :5
// No of childrens of5
// 0

// child added5

// connection made5
// Enter data :6
// No of childrens of6
// 0

// child added6

// connection made6

// child added2

// connection made2
// Enter data :3
// No of childrens of3
// 0

// child added3

// connection made3
// Enter data :4
// No of childrens of4
// 0

// child added4

// connection made4
// 1: 2,3,4,
// 2: 5,6,
// 5:
// 6:
// 3:
// 4:
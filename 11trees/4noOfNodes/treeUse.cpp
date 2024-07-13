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


int numNode(TreeNode<int>* root){
        int ans=1;
    for(int i=0;i<root->childrens.size();i++){
        ans+=numNode(root->childrens[i]);
    }
    return ans;
}



int main(){
    TreeNode<int> * root = takeInput();
    cout<< "no of node: ";
    cout<<numNode(root);
}

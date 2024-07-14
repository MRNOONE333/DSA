#include <iostream>
using namespace std;
#include "treeNode.h"

// TreeNode  <int> * takeInput(){
//     int rootData;
//     cout<<"Enter data :";
//     cin>>rootData;
//     TreeNode<int> * root = new TreeNode<int> (rootData);

//     int n;
//     cout<<"No of childrens of"<<rootData<<endl;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         TreeNode <int> * child = takeInput();//input
//         cout<<endl<<"child added"<< child->data <<endl;

//         root->childrens.push_back(child);// push
//         cout<<endl<<"connection made"<< child->data <<endl;
        
//     }
//     return root;
// }



int height(TreeNode<int>* root) {
    if (root == NULL) return 0;

    int maxChildHeight=0;//flag val
    for(int i =0; i<root->childrens.size(); i++){
        int childHeight = height(root->childrens[i]);
        if(childHeight>maxChildHeight){
            maxChildHeight = childHeight;
        }
    }
    return maxChildHeight+1;
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
    node3->childrens.push_back(node4);
    cout<< "height: "<<height(root);
}

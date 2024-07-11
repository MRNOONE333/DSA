#include<vector>

template<typename T>

class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> childrens;

    
    TreeNode(T data){
        this->data=data;
    }

    //destructor with recursion in treeNode.h file then we can just 
    //call- delete root and it will work.
    ~TreeNode(){
        for(int i =0; i<root->childrens.size(); i++){ 
            delete childrens[i];
        }
    }
};
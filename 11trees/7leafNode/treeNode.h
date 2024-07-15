#include<vector>

template<typename T>

class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> childrens;

    
    TreeNode(T data){
        this->data=data;
    }
};
template<typename T>
class BinaryTreeNode{
    public: 
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;// addresses

    BinaryTreeNode(T data){
        this->data=data;
        left=NULL;
        right=NULL ;//values
    };
    ~BinaryTreeNode(){
        delete left;
        delete right;
        // todo delete root
    }
};

#ifndef TREE_H
#define TREE_H

template<typename T>
struct BST_Node {
T val;
BST_Node* left;
BST_Node* right;

BST_Node(T v) : val(v),left(NULL),right(NULL)
{}

void insert(T v) {
    if(v>val){
        if (right==NULL) right = new BST_Node<T>(v);
        else right->insert(v);
    }
    else{
        if (left==NULL) left = new BST_Node<T>(v);
        else left->insert(v);
    }
}

};


template<typename T>
void delete_tree(BST_Node<T>* root){
    if (root==NULL) return;
    delete_tree(root->left);
    delete_tree(root->right);
    delete root;
}


//your work starts here
template<typename T>
int num_nodes(BST_Node<T>* root)
{
    if(root ==NULL)
    return 0;
    int temp = 0;
    if(root->left && root->right)
        temp++;
    temp +=(num_nodes(root->left) + num_nodes(root->right));
    return temp;
}



template<typename T>
bool has_duplicate_val(BST_Node<T>* root)
{
    struct BST_Node<T> prev = 0;
    if(root ==NULL)
        return false;
    has_duplicate_val(root->left);
    if(prev !=NULL)
    {
        if(root->val == prev->val){
            return true;
        }
        else{
            return false;
        }

    }

    return true;

}


template<typename T>
bool trees_identical(BST_Node<T>* a, BST_Node<T>* b)
{
    if((a==NULL) && (b==NULL))
    return true;
    if(a==NULL || b ==NULL)
        return false;
}



#endif //TREE_H

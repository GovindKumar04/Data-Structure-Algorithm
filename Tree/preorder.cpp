#include <iostream>
using namespace std;

class Tree{
    public:
    Tree* left;
    Tree* right;
    int data;
    Tree(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

void preorder(Tree* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    Tree* root= new Tree(1);
    root->left= new Tree(2);
    root->left->left= new Tree(4);
    root->left->left->left= new Tree(8);
    root->left->right= new Tree(5);
    root->right= new Tree(3);
    root->right->left= new Tree(6);
    root->right->left->right= new Tree(10);
    root->right->right= new Tree(7);
    
    preorder(root);
    return 0;
}
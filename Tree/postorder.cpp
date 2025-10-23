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

void postorder(Tree* root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
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
    
    postorder(root);
    return 0;
}
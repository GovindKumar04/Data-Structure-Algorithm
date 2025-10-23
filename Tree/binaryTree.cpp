#include <iostream>
using namespace std;

class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;
    Tree(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};


int main(){
    return 0;
}
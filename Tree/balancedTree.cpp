#include <iostream>
#include <cstdlib> // For abs()
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
   int lCount(TreeNode* root, int count) {
        TreeNode* temp=root;
        while(temp->left != NULL){
            count++;
            temp=temp->left;
        }
        return count;
    }
    int rCount(TreeNode* root, int count) {
        TreeNode* temp=root;
        while(temp->left!=NULL){
            count++;
            if(temp->right!=NULL) temp=temp->right;

        }
        return count;
    }

    bool isBalanced(TreeNode* root) {
        if(root==NULL || root->left==NULL || root->right==NULL) return true;
        int n = 0, m = 0;
        int a = lCount(root, n);
        int b = rCount(root, m);
        if(abs(a-b)>1){
            return false;
        }
        return true;
    }
};

int main() {
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    // root->right = new TreeNode(3);
    // root->left->left = new TreeNode(4);
    // root->left->right = new TreeNode(5);

    Solution s;
    bool result = s.isBalanced(root);
    cout << (result ? "The tree is balanced." : "The tree is not balanced.") << endl;

    // Cleanup memory (for a real scenario)
    // Ideally, implement a function to delete the tree
    return 0;
}

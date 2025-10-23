#include <iostream>
#include <queue>
using namespace std;

class Tree
{
public:
    Tree *left;
    Tree *right;
    int data;
    Tree(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<vector<int>> levelorder(Tree *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;
    queue<Tree *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> l;
        for (int i = 0; i < size; i++)
        {
            Tree *node = q.front();
            q.pop();
            if (node->left != NULL) q.push(node->left);
            if (node->right != NULL) q.push(node->right);
            l.push_back(node->data);
            cout<<node->data<<" ";
        }
        ans.push_back(l);
    }
    return ans;
}

vector<vector<int>> zigzagLevelOrder(Tree* root) {
    vector<vector<int>> ans;
    queue<Tree*> q;
    q.push(root);

    int count = 0;
    while (!q.empty()) {
        vector<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Tree* node=q.front();
            q.pop();
            if (count % 2 == 0) {
                if (root->left != NULL) q.push(root->left);
                if (root->right != NULL) q.push(root->right);
            } else {
                if (root->right != NULL) q.push(root->right);
                if (root->left != NULL) q.push(root->left);
            }
            level.push_back(node->data);
            count++;
        }

        ans.push_back(level);
    }
    return ans;
}
int main()
{
    Tree *root = new Tree(1);
    root->left = new Tree(2);
    root->left->left = new Tree(4);
    root->left->left->left = new Tree(8);
    root->left->right = new Tree(5);
    root->right = new Tree(3);
    root->right->left = new Tree(6);
    root->right->left->right = new Tree(10);
    root->right->right = new Tree(7);
    levelorder(root);
    return 0;
}
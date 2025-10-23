#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class TreeNode
{
public:
    TreeNode *left;
    TreeNode *right;
    int val;
    TreeNode(int data)
    {
        this->val = data;
        left = NULL;
        right = NULL;
    }
};

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(root);

    int count = 0;
    while (!q.empty()) {
        vector<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode* node=q.front();
            q.pop();
            if (count % 2 == 0) {
                if (root->left != NULL) q.push(root->left);
                if (root->right != NULL) q.push(root->right);
            } else {
                if (root->right != NULL) q.push(root->right);
                if (root->left != NULL) q.push(root->left);
            }
            level.push_back(node->val);
            count++;
        }

        ans.push_back(level);
    }
    return ans;
}

int main(){
    
    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);
    vector<vector<int>> ans=zigzagLevelOrder(root);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }



}
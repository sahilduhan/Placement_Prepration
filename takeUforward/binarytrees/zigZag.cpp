#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};
vector<vector<int>>zigZagTraversal(TreeNode* root){
    vector<vector<int>>result;
    if (root == NULL) return result;
    queue<TreeNode*>q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty()){
        int n = q.size();
        vector<int> level;

        for (int i = 0;i < n;i++){
            TreeNode* node = q.front();
            q.pop();

            int index = (leftToRight) ? i : (n - i - 1);
            level[index] = node->val;

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);

        }
        leftToRight != leftToRight;
        result.push_back(level);
    }
    return result;
}
int main(){


    return 0;
}
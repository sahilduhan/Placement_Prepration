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
int solve(TreeNode* root){

    if (!root) return 0;
    int maxSumLevel = 0;
    queue<TreeNode*>q;
    q.push(root);

    while (!q.empty()){
        int levelSize = q.size();
        vector<int>level;
        int lev = 0;
        int maxSum = INT_MIN;
        for (int i = 0;i < levelSize;i++){
            TreeNode* node = q.front();
            q.pop();
            level.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        lev++;
        int sum = 0;
        for (auto it : level) sum += it;

        if (sum > maxSum) maxSumLevel = lev;
    }
    return maxSumLevel;
}
int main(){



    return 0;
}
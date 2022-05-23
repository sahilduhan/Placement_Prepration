#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};
class Solution {
public:
    int dfs(TreeNode* root, int& ans){
        if (root != NULL){
            int x = dfs(root->left, ans);
            int y = dfs(root->right, ans);
            ans = max(ans, x + y + root->val);
            return max(0, root->val + max(x, y));
        }
        return 0;
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        dfs(root, ans);
        return ans;
    }
};
int main(){

    return 0;
}
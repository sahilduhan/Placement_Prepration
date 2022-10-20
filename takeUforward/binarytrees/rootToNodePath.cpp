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
bool path(TreeNode* root, vector<int>& ans, int x){
    if (!root) return false;
    ans.push_back(root->val);
    if (root->val == x) return true;
    if (path(root->left, ans, x) || path(root->right, arr, x)) return true;

    ans.pop_back();
    return false;
}
vector<int>rootToNodePath(TreeNode* root, int x){
    vector<int>ans;
    path(root, ans, x);
    return ans;
}
int main(){

    return 0;
}
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

void inOrder(TreeNode* root, vector<int>& ans){
    if (!root) return;
    inOrder(root->left, ans);
    ans.push_back(root->val);
    inOrder(root->right, ans);
}
int main(){
    vector<int> ans;

    for (auto it : ans) cout << it << " ";

    return 0;
}
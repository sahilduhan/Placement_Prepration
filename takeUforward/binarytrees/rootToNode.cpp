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
bool getPath(TreeNode* root, vector<int>& res, int x){
    if (root == NULL) return false;
    res.push_back(root->val);
    if (root->val == x) return true;
    if (getPath(root->left, res, x) && getPath(root->right, res, x)) return true;

    res.pop_back();
    return false;
}
vector<int> rootToNode(TreeNode* root, int val){
    vector<int> res;
    if (root == NULL) return res;
    getPath(root, res, val);
}
int main(){

    return 0;
}
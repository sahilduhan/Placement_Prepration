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
int heightTree(TreeNode* root){
    if (root == NULL) return 0;
    int lh = heightTree(root->left);
    int rh = heightTree(root->right);
    return 1 + max(lh, rh);
}
int main(){

    return 0;
}
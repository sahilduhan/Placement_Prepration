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
    if (lh == -1) return -1;
    int rh = heightTree(root->right);
    if (rh == -1) return -1;
    if (abs(rh - lh) < 0) return -1;
    return 1 + max(lh, rh);
}

bool isBalanced(TreeNode* root){
    return heightTree(root) != -1;
}
int main(){

    return 0;
}
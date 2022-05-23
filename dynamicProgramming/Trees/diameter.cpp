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
int dfs(TreeNode* root, int& ans){

    if (root == NULL) return 0;

    int leftD = dfs(root->left, ans);
    int rightD = dfs(root->right, ans);

    ans = max(ans, leftD + rightD);

    return 1 + max(leftD, rightD);

}
int diameter(TreeNode* root){
    int ans = 0;
    dfs(root, ans);
    return ans;
}

int main(){

    TreeNode* root = new TreeNode(10);

    //left side of the tree

    root->left = new TreeNode(1);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->left->left->right = new TreeNode(7);
    root->left->left->right->right = new TreeNode(13);
    root->left->right->left = new TreeNode(8);

    //right side of the tree

    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->right->right->left = new TreeNode(11);
    root->right->right->right = new TreeNode(12);

    cout << diameter(root);
    return 0;
}
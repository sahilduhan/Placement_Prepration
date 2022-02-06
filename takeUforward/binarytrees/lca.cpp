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
TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q){
    if(root == p || root == q || root == NULL) return root;
    auto left = lca(root->left, p, q);
    auto right = lca(root->right, p, q);
    if(left == NULL) return right;
    if(right == NULL) return left;

    return root;

}
int main(){

    return 0;
}
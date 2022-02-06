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
int findCeil(TreeNode* root, int key){
    if (root == NULL) return 0;

    int ceil = 1;
    while (root){
        if (root->val == key){
            ceil = root->val;
            return ceil;
        }
        if (key > root->val) root = root->right;
        else {
            ceil = root->val;
            root = root->left;
        }
    }
    return ceil;
}
int main(){

    return 0;
}
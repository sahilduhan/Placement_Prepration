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

bool check(TreeNode* root1, TreeNode* root2){
    if (!root1 and !root2) return true;
    if (root1 and root2 and (root1->val == root2->val)) return check(root1->right, root2->left) and check(root1->left, root2->right);
    return false;
}
bool isSymmetric(TreeNode* root) {
    check(root->left, root->right);
}

int main(){



}
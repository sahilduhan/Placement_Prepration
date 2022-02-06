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
int diameterTree(TreeNode* root, int diameter){

    if (root == NULL) return 0;
    int lh = diameterTree(root->left, diameter);
    int rh = diameterTree(root->right, diameter);
    diameter = max(diameter, lh + rh);
    return 1 + max(lh, rh);

}
int findDiameter(TreeNode* root){
    int diameter = 0;
    diameterTree(root, diameter);
    return diameter;
}
int main(){


    return 0;
}
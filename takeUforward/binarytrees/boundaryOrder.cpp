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
bool isLeaf(TreeNode* root){
    if (root->left == NULL && root->right == NULL) return true;
    return false;
}
void addLeft(TreeNode* root, vector<int>& res){
    TreeNode* cur = root->left;
    while (cur){
        if (!isLeaf(cur)) res.push_back(cur->val);
        if (cur->left) cur = cur->left;
        else cur = cur->right;
    }
}
void addRight(TreeNode* root, vector<int>& res){
    TreeNode* cur = root;
    vector<int> temp;
    while (cur){
        if (!isLeaf(cur)) temp.push_back(cur->val);
        if (cur->right) cur = cur->right;
        else cur = cur->left;
    }
    for (int i = temp.size() - 1; i >= 0; i--) res.push_back(temp[i]);
}
void addLeaves(TreeNode* root, vector<int>& res){
    if (isLeaf(root)){
        res.push_back(root->val);
        return ;
    }
    if (root->left) addLeaves(root->left, res);
    if (root->right) addLeaves(root->right, res);
}
vector<int>boundaryOrder(TreeNode* root){
    vector<int>res;
}
int main(){


    return 0;
}
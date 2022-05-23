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

bool isLeaf(TreeNode* root){
    if (root->left == NULL && root->right == NULL) return true;
    return false;
}

void addLeft(TreeNode* root, vector<int>& res){
    TreeNode* curr = root->left;
    while (curr){
        if (!isLeaf(curr)) res.push_back(curr->val);
        if (curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

void addRight(TreeNode* root, vector<int>& res){
    TreeNode* curr = root->right;
    vector<int>temp;
    while (curr){
        if (!isLeaf(curr)) temp.push_back(curr->val);
        if (curr->right) curr = curr->right;
        else curr = curr->right;
    }
    for (int i = temp.size() - 1;i >= 0;i--) res.push_back(temp[i]);
}



void addLeaves(TreeNode* root, vector<int>& res){
    if (isLeaf(root)){
        res.push_back(root->val);
        return;
    }
    addLeaves(root->left, res);
    addLeaves(root->right, res);
}

int main(){


    return 0;
}
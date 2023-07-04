#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int data;
    TreeNode* left, * right;
    TreeNode(int x){
        data = x;
        left = right = NULL;
    }
};

vector<vector<int>>levelOrder(TreeNode* root){
    vector<vector<int>>levelTraversal;
    queue<TreeNode*>q;
    if (!root) return levelTraversal;
    q.push(root);
    while (!q.empty()){
        vector<int>level;
        int size = q.size();
        for (int i = 0;i < size;i++){
            TreeNode* curr = q.front();
            q.pop();
            if (curr->left) q.push(root->left);
            if (curr->right) q.push(root->right);
            level.push_back(curr->data);
        }
        levelTraversal.push_back(level);
    }
    return levelTraversal;
}
int main(){



}
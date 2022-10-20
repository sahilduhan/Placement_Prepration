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

vector<int>rightView(TreeNode* root){
    queue<TreeNode*>q;
    vector<int>ans;

    if (!root) return ans;

    q.push(root);
    while (!q.empty()){
        int n = q.size();

        for (int i = 0;i < n;i++){

            TreeNode* node = q.front();
            q.pop();
            if (i == n - 1) ans.push_back(node->val);
            if (node->left) q.push(root->left);
            if (node->right) q.push(root->right);

        }
    }

}

int main(){



}
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
vector<int>topView(TreeNode* root){
    vector<int> res;
    if (root == NULL) return res;
    map<int, int> mp;
    queue<pair<TreeNode*, int>>q;
    q.push({root, 0});
    while (!q.empty()){
        auto it = q.front();
        q.pop();
        TreeNode* temp = it.first;
        int line = it.second;

        if (mp.find(line) == mp.end()) mp[line] = temp->val;

        if (temp->left != NULL) q.push({temp->left, line - 1});
        if (temp->right != NULL) q.push({temp->right, line + 1});
    }
    for (auto it : mp) res.push_back(it.second);
    return res;
}
int main(){


    return 0;
}
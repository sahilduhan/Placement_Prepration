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
vector<int>zigZagTraversal(TreeNode* root){
    vector<int> res;
    if(root == NULL) return res;

    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = true;

    while(!q.empty()){
        int size = q.size();
        vector<int> row(size);

        for(int i = 0; i < size; i++){
            TreeNode* node = q.front();
            q.pop();

            int index = (leftToRight) ? i : (size - 1-i);

            row[index] = node->val;
            if(node->left)  q.push(node->left);
            if (node->right) q.push(node->right);

        }
        leftToRight != leftToRight;
        res.push_back(row);
    }
    return res;
    
}
int main(){

    return 0;
}
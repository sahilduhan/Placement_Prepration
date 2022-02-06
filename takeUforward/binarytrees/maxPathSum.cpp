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
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        maxSum(root, sum);
        return sum;
    }
    int maxSum(TreeNode* root, int sum){
        if (root == NULL) return 0;
        int leftSum = max(0, maxSum(root->left, sum));
        int rightSum = max(0, maxSum(root->right, sum));
        sum = max(sum, rightSum + leftSum + root->val);
        return  max(leftSum, rightSum) + root->val;
    }
};
int main(){

    return 0;
}
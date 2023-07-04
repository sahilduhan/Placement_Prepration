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

vector<int>preOrder(TreeNode* root){
    vector<int>preOrderTraversal;

    stack<TreeNode*>st;
    st.push(root);

    while (!st.empty()){
        TreeNode* curr = st.top();
        st.pop();

        preOrderTraversal.push_back(curr->data);
        if (curr->right) st.push(curr->right);
        if (curr->left) st.push(curr->left);
    }
    return preOrderTraversal;
}

vector<int>inOrder(TreeNode* root){

}
int main(){


    return 0;
}
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

void inOrder(TreeNode* root){
    if (!root) return;
    inOrder(root->left);
    cout << root->data << " " << endl;
    inOrder(root->right);
}
void preOrder(TreeNode* root){
    if (!root) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(TreeNode* root){
    if (!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
int main(){



    return 0;
}
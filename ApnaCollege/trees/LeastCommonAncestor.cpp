#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
Node* LeastCommonAncestor(Node* root, int n1, int n2){
    if (root == NULL) return NULL;
    if (root->data == n1 || root->data == n2) return root;

    LeastCommonAncestor(root->left, n1, n2);
    LeastCommonAncestor(root->right, n1, n2);

    if (root->left == NULL && root->right == NULL) return NULL;
    if (root->right != NULL && root->left != NULL) return root;

    if (root->left != NULL) return LeastCommonAncestor(root->left, n1, n2);
    return LeastCommonAncestor(root->right, n1, n2);

}
int main(){

    // root node

    Node* root = new Node(10);

    // left side of tree

    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);
    root->left->right = new Node(50);

    // right side of tree

    root->right = new Node(30);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    root->right->right->left = new Node(100);
    root->right->right->right = new Node(110);

    LeastCommonAncestor(root, 60, 100);

    return 0;
}


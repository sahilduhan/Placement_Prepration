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
int heightTree(Node* root){
    if (!root) return 0;
    return max(heightTree(root->left), heightTree(root->right)) + 1;
}
bool isBalanced(Node* root, int* heightTree){
    int lh = 0, rh = 0;
    if (!root) return false;
    if (isBalanced(root->left, &lh) == false) return false;
    if (isBalanced(root->right, &rh) == false) return false;

    *heightTree = max(lh, rh) + 1;
    if (abs(lh - rh) <= 1) return true;
    return false;
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




    return 0;
}
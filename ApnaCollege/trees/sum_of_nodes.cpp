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
int sum_at_k_node(Node* root){
    if (root == NULL) return 0;
    return sum_at_k_node(root->left) + sum_at_k_node(root->right) + root->data;
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

    cout << sum_at_k_node(root);
    cout << endl;
    return 0;
}
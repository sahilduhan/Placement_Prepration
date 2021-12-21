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
        left = NULL;
        right = NULL;
    }
};

bool checkBST(Node* root, Node* min = NULL, Node* max = NULL){

    if (root == NULL) return true;

    if (max != NULL && root->data >= max->data) return false;
    if (min != NULL && root->data <= min->data) return false;
    bool leftValid = checkBST(root->left, min, root->right);
    bool rightValid = checkBST(root->right, root, max);

    return leftValid && rightValid;
}
int main()
{

    Node* root = new Node(40);
    //left side of the tree

    root->left = new Node(20);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->left->right->left = new Node(25);
    root->left->right->right = new Node(35);

    // right side of the tree

    root->right = new Node(60);
    root->right->left = new Node(50);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);

    cout << checkBST(root);


    return 0;
}
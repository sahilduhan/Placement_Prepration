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
Node* inorderSuccessor(Node* root){
    Node* temp = root;
    while (temp && temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* deleteNode(Node* root, int val){
    if (val < root->data) root->left = deleteNode(root->left, val);

    else if (val > root->data) root->right = deleteNode(root->right, val);

    else {
        if (root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        else if (root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        Node* temp = inorderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;

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
    // root->right->left->right = new Node(110);



    return 0;
}
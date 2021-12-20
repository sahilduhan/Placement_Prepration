#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left, * right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
Node* insertBST(Node* root, int val){

    if (root == NULL) return new Node(val);
    if (val < root->data) insertBST(root->left, val);
    else insertBST(root->right, val);
    return root;
}

void inOrder(Node* root){
    if (root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main(){
    Node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    inOrder(root);

    return 0;
}
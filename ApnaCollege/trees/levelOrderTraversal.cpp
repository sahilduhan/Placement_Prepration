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
void display(Node* root){
    if (root == NULL) return;
    cout << root->data << " ";
    display(root->left);
    display(root->right);
}
void levelOrder(Node* root){
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        Node* node = q.front();
        q.pop();
        if (node != NULL){
            cout << node->data << " ";
            if (node->left)  q.push(node->left);
            if (node->right) q.push(node->right);
        }
        else if (!q.empty()) q.push(NULL);
    }
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

    display(root);
    cout << endl;
    levelOrder(root);
    cout << endl;


    return 0;
}
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
void rightView(Node* root){
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()){
        int n = q.size();
        for (int i = 0; i < n; i++){
            Node* curr = q.front();
            q.pop();
            if (i == n - 1) cout << curr->data << " ";

            if (curr->left != NULL) q.push(curr->left);
            if (curr->right != NULL) q.push(curr->right);
        }
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

    rightView(root);

    return 0;
}
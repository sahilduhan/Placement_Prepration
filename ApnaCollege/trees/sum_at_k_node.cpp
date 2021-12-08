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
int sum_at_k_node(Node* root, int k){

    if (root == NULL) return -1;
    int level = 0, sum = 0;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        Node* node = q.front();
        q.pop();
        if (node != NULL){
            if (level == k) sum += node->data;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        else if (!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
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

    cout << sum_at_k_node(root, 2);


    return 0;
}
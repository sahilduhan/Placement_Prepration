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
Node* searchBST(Node* root, int val){
    if (root == NULL) return NULL;

    if (root->data == val) return root;

    if (root->data > val) searchBST(root->right, val);

    return searchBST(root->left, val);

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

    if (searchBST(root, 35) == NULL) cout << "Value donot exist" << endl;
    else cout << "Value exist" << endl;

    return 0;
}
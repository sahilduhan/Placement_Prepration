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
Node* arrToBst(int* arr, int start, int end){
    if (start > end) return NULL;

    int mid = (start + end) / 2;
    Node* root = new Node(arr[mid]);

    root->left = arrToBst(arr, start, mid - 1);

    root->right = arrToBst(arr, mid + 1, end);

    return root;
}
int main()
{



    return 0;
}
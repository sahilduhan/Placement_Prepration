#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node(int data): val(data), next(NULL){};
};
Node* reverse(Node* head){
    Node* curr = head, * prev = NULL, * next;
    if (!head || !head->next) return head;
    while (curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main(){



    return 0;
}
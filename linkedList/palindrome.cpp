#include<bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T>* next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int>* reverse(LinkedListNode<int>* head){
    LinkedListNode<int>* curr = head, * prev = NULL, * next;
    while (curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int>* head) {
    LinkedListNode<int>* fast = head, * slow = head;
    while (fast and fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    LinkedListNode<int>* newHead = slow->next;
    slow->next = NULL;
    newHead = reverse(newHead);
    LinkedListNode<int>* temp = head;
    while (temp and newHead){
        if (temp->data != newHead->data) return false;
        temp = temp->next;
        slow = slow->next;
    }
    return true;
}
int main(){


    return 0;
}


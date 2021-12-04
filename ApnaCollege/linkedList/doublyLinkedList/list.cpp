#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};
void insertTail(Node* head, int val){
    if (head == NULL){
        insertTail(head, val);
        return;
    }
    Node* temp = head;
    Node* newNode = new Node(val);
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void display(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertHead(Node* head, int val){

    Node* newNode = new Node(val);
    // Node* temp = head;
    newNode->next = head;
    if (head != NULL) head->prev = newNode;
    head = newNode;
}
int main(){
    Node* head = new Node(1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertTail(head, 4);
    insertTail(head, 5);
    insertTail(head, 6);
    // insertHead(head, 7);
    display(head);
    return 0;
}
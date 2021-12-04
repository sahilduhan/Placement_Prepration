#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(Node* head)
{
    if (head == NULL) return;
    cout << head->data << " ";
    print(head->next);
}

void makeCycle(Node* head, int pos){
    Node* temp = head;
    Node* startNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos) startNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
void removeCycle(Node* head){
    Node* fast = head;
    Node* slow = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}
bool cycleDetection(Node* head){
    Node* fast = head;
    Node* slow = head;

    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) return true;
    }
    return false;
}
int main()
{

    Node* head = new Node(100);
    Node* second = new Node(200);
    Node* third = new Node(300);
    Node* fourth = new Node(400);
    Node* fifth = new Node(500);
    Node* sixth = new Node(600);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    makeCycle(head, 3);
    cout << cycleDetection(head) << endl;
    removeCycle(head);
    cout << cycleDetection(head) << endl;
    // print(head);


    return 0;
}
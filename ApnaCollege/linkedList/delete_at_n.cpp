#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    print(head->next);
}
void delete_(Node *head, int key)
{
    Node *temp = head;
    if (head->next == NULL)
    {
        delete_(head, key);
    }
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
int main()
{

    Node *head = new Node(100);
    Node *second = new Node(200);
    Node *third = new Node(300);
    Node *fourth = new Node(400);
    Node *fifth = new Node(500);
    Node *sixth = new Node(600);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    delete_(head, 400);
    print(head);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}

};

ListNode* cycleNode(ListNode* head){
    ListNode* fast = head, * slow = head;
    if (!head || !head->next) return NULL;
    while (fast and fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast) break;
    }
    slow = head;

    while (fast != slow){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
int main(){



    return 0;
}
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}

};

ListNode* middle(ListNode* head){
    ListNode* slow = head, * fast = head;
    while (fast->next and fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main(){



    return 0;
}
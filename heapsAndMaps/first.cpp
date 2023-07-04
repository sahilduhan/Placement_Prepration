#include<bits/stdc++.h>
using namespace std;
int main(){

    // priority_queue<int>pq; // max heap
    priority_queue<int, vector<int>, greater<int>> pq; // min heap

    vector<int>arr = {1, 234, -234, 14515, 155, 15516, 15516, 13515, 51};

    // insertion and deletion takes constant time in heaps

    set<int>st;
    int k = 4;
    for (auto it : arr){
        pq.push(it);
        if (pq.size() > k) pq.pop();
    }
    cout << pq.top() << endl;
    return 0;
}
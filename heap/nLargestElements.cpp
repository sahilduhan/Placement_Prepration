#include<bits/stdc++.h>
using namespace std;
void nLargestElements(vector<int>& nums, int k){
    priority_queue<int, vector<int>, greater<int>>q;
    for (auto it : nums){
        q.push(it);
        if (q.size() > k) q.pop();
    }
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
}
int main(){
    vector<int>nums = {1, 2, 12, 134, 34, 12413};
    nLargestElements(nums, 3);
    return 0;
}
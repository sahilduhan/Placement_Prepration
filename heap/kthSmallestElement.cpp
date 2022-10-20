#include<bits/stdc++.h>
using namespace std;
int kthLargestSmallest(vector<int>& nums, int k){
    priority_queue<int>q;
    for (auto it : nums) {
        q.push(it);
        if (q.size() > k) q.pop();
    }
    return q.top();
}
int main(){
    vector<int>nums = {7, 10, 4, 3, 12, 15};
    int ans = kthLargestSmallest(nums, 3);
    cout << ans << endl;
    return 0;
}
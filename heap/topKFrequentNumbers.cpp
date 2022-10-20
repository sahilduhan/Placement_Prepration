#include<bits/stdc++.h>
using namespace std;
void topKFrequentNumbers(vector<int>& nums, int k){
    unordered_map<int, int>mp;
    priority_queue<pair<int, int>>pq;
    for (auto it : nums) mp[it]++;
    for (auto it : mp){
        pq.push({it.first, it.second});
        if (pq.size() > k) pq.pop();
    }
    while (!pq.empty()){
        cout << pq.top().first << " ";
        pq.pop();
    }
}
int main(){
    vector<int>nums = {1, 1, 1, 3, 2, 2, 4};
    topKFrequentNumbers(nums, 2);


    return 0;
}
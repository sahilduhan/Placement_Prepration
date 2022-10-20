#include<bits/stdc++.h>
using namespace std;
vector<int> sortByFreq(vector<int>& nums){
    vector<int>ans;
    priority_queue<pair<int, int>>pq;
    unordered_map<int, int>mp;
    for (auto it : nums) mp[it]++;
    for (auto it : mp) pq.push({it.first, it.second});
    while (!pq.empty()){
        int k = pq.top().first;
        int e = pq.top().second;
        while (k--){
            ans.push_back(e);
        }
        pq.pop();
    }
    return ans;
}
int main(){
    vector<int>nums = {1, 1, 2, 2, 2, 2, 31, 31, 1222, 11, 1};
    return 0;
}
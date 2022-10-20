#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        priority_queue<pair<int, string>> pq;
        vector<string>ans;
        for (auto it : words) mp[it]++;

        for (auto it : mp) {
            pq.push({-(it.second), it.first});
            if (pq.size() > k) pq.pop();
        }
        while (!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main(){


    return 0;
}
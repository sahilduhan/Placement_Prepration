#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        priority_queue<pair<int, char>>pq;
        string ans = "";
        for (auto it : s) mp[it]++;
        for (auto it : mp) pq.push({it.second, it.first});
        while (!pq.empty()){
            int k = pq.top().first;
            char s = pq.top().second;
            while (k--){
                ans += s;
            }
            pq.pop();
        }
        return ans;
    }
};
int main(){


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int, pair<int, int>>>pq;
        int n = points.size();
        for (int i = 0;i < n;i++){
            pq.push({points[i][0] * points[i][0] + points[i][1] * points[i][1], {points[i][0], points[i][1]}});
            if (pq.size() > k) pq.pop();
        }
        while (!pq.empty()){
            vector<int>temp;
            int p = pq.top().second.first;
            int q = pq.top().second.second;
            temp.push_back(p);
            temp.push_back(q);
            ans.push_back(temp);
            pq.pop();
        }
        return ans;
    }
};
int main(){


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue <pair<int, int>> pq;
        vector<int>ans;
        for (int i = 0;i < arr.size();i++)
        {
            pq.push({abs(x - arr[i]), arr[i]});
            if (pq.size() > k) pq.pop();
        }
        while (pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main(){
    vector<int>arr = {1, 2, 3, 4, 5};
    return 0;
}
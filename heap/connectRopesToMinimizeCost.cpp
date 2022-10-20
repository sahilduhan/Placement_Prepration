#include<bits/stdc++.h>
using namespace std;
int miCost(vector<int>& nums){
    priority_queue<int>pq;
    int cost = 0;
    for (auto it : nums) pq.push(it);
    while (pq.size() >= 2){
        int f = pq.top();
        pq.pop();
        int s = pq.top();
        pq.pop();
        cost += f + s;
        pq.push(f + s);
    }
    return cost;
}
int main(){
    vector<int>nums = {1, 2, 3, 4, 5};
    cout << miCost(nums) << endl;


    return 0;
}
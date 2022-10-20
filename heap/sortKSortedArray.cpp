#include<bits/stdc++.h>
using namespace std;
void sortKSortedArr(vector<int>& nums, int k){
    priority_queue<int, vector<int>, greater<int>>pq;
    for (auto it : nums){
        pq.push(it);
        if (pq.size() > k){
            cout << pq.top() << " ";
            pq.pop();
        }
    }
    cout << endl;
    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
}
int main(){
    vector<int>nums = {1, 213, 21, 4113, 13, 121};
    sortKSortedArr(nums, 3);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>>pq;
        for (int i = 0;i < k;i++) pq.push(stoll(nums[i]));
        for (int i = k;i < nums.size();i++)
        {
            pq.push(stoll(nums[i]));
            pq.pop();

        }
        return to_string(pq.top());
    }
};

int main(){

    return 0;

}
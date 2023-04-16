#include<bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>& nums, int k, vector<int>& ans){
    // Write your code here.
    vector<int>ans;

    int l = 0, r = 0;
    // vector<int>ans;
    queue<int>q;
    while (r < nums.size()){
        if (nums[r] < 0) q.push(nums[r]);
        if (r - l + 1 != k) r++;
        else if (r - l + 1 == k){
            if (q.empty()) ans.push_back(0);
            else {
                ans.push_back(q.front());
                if (nums[l] == q.front()) q.pop();
            }
            l++;
            r++;
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {12, -1, -7, 8, -15, 30, 16, 28}, ans ;
    solve(nums, 3, ans);
    for (auto it : ans) cout << it << " ";
    return 0;
}
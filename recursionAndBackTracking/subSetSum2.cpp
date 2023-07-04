#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp, int idx){
        ans.push_back(temp);
        for (int i = idx;i < nums.size();i++){
            if (i != idx and nums[i] == nums[i - 1]) continue;
            temp.push_back(nums[i]);
            solve(nums, ans, temp, idx + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(), nums.end());
        solve(nums, ans, temp, 0);
        return ans;
    }
};
int main(){



    return 0;
}
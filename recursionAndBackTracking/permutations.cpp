#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, vector<int>& freq){
        if (temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }
        for (int i = 0;i < nums.size();i++){
            if (!freq[i]){
                temp.push_back(nums[i]);
                freq[i] = 1;
                solve(nums, temp, ans, freq);
                freq[i] = 0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp, freq(0, nums.size());
        solve(nums, temp, ans, freq);
        return ans;
    }
};
int main(){




    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[2501][2501];
    int solve(int i, int prev, vector<int>& nums){
        if (i == nums.size()) return 0;
        if (dp[i][prev + 1] != -1) return dp[i][prev + 1];
        if (prev == -1 || nums[i] > nums[prev]){
            int pick = 1 + solve(i + 1, i, nums);
            int notPick = solve(i + 1, prev, nums);
            return dp[i][prev + 1] = max(pick, notPick);
        }
        else return dp[i][prev + 1] = solve(i + 1, prev, nums);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return solve(0, -1, nums);
    }
};
int main(){




    return 0;
}
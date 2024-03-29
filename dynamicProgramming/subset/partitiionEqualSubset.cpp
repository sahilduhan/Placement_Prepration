#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool ssum(vector<int>& nums, int s){
        int n = nums.size();
        bool t[n + 1][s + 1];
        for (int i = 0; i < n + 1; i++){
            for (int j = 0; j < s + 1; j++){
                if (i == 0) t[i][j] = false;
                if (j == 0) t[i][j] = true;
            }
        }
        for (int i = 1; i < n + 1; i++){
            for (int j = 1; j < s + 1; j++){
                if (nums[i - 1] <= j) t[i][j] = (t[i - 1][j - nums[i - 1]] || t[i - 1][j]);
                else t[i][j] = t[i - 1][j];
            }
        }
        return t[n][s];
    }
    bool canPartition(vector<int>& nums){
        int sum = 0;
        for (auto it : nums) sum += it;
        if (sum % 2 != 0) return false;
        return ssum(nums, sum / 2);
    }
};
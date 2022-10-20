#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubsets(vector<int>& nums, int check)
    {
        int n = nums.size();
        int t[n + 1][check + 1];

        for (int i = 0 ; i < n + 1 ; i++){
            for (int j = 0 ; j < check + 1 ; j++){
                if (i == 0) t[i][j] = 0;
                if (j == 0) t[i][j] = 1;
            }
        }

        for (int i = 1 ; i < n + 1 ; i++){
            for (int j = 0 ; j < check + 1 ; j++){
                if (nums[i - 1] <= j) t[i][j] = t[i - 1][j] + t[i - 1][j - nums[i - 1]];
                else t[i][j] = t[i - 1][j];
            }
        }
        return t[n][check];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (int i = 0; i < nums.size() ; i++) sum += nums[i];
        target = abs(target);
        int check = (sum + target) / 2;
        if ((sum + target) % 2 != 0) return 0;
        return countSubsets(nums, check);
    }
};
int main(){

    return 0;
}
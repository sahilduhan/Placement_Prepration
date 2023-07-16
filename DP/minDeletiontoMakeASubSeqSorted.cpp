#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int dp[1001];
    int solve(int i, int prev, int* nums, int n){
        if (i == n) return 0;
        if (dp[prev + 1] != -1) return dp[prev + 1];
        if (prev == -1 || nums[i] > nums[prev]){
            int pick = 1 + solve(i + 1, i, nums, n);
            int notPick = solve(i + 1, prev, nums, n);
            return dp[prev + 1] = max(pick, notPick);
        }
        else return dp[prev + 1] = solve(i + 1, prev, nums, n);
    }
    int minDeletions(int arr [], int n){
        memset(dp, -1, sizeof(dp));
        return n - solve(0, -1, arr, n);
    }
};
int main(){



    return 0;
}
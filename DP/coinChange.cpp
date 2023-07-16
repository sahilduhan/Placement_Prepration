#include<bits/stdc++.h>
using namespace std;
int dp[100001];
class Solution {
public:
    int solve(int amount, vector<int>& coins){
        if (amount < 0)    return INT_MAX;
        if (amount == 0)   return 1;
        if (dp[amount] != -1) return dp[amount];
        int ans = INT_MAX;
        for (int i = 0;i < coins.size();i++) ans = min(ans, solve(amount - coins[i], coins));
        dp[amount] = ans;
        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int ans = solve(amount, coins);
        if (ans >= INT_MAX) return -1;
        return ans;
    }
};
int main(){




    return 0;
}
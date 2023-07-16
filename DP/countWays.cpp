#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dp[10001];
    long long int MOD = 1e9 + 7;
    int solve(int n){
        if (n < 0) return 0;
        if (n == 0) return 1;
        if (dp[n] != -1) return dp[n];
        return dp[n] = (solve(n - 1) + solve(n - 2)) % MOD;
    }
    int countWays(int n){
        memset(dp, -1, sizeof(dp));
        return solve(n);
    }
};

int main(){


    return 0;
}
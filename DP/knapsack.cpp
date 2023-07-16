#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int solve(int i, int n, int wt, int* profit, int* wts){
    if (i >= n) return 0;
    if (dp[wt][i] != -1) return dp[wt][i];
    if (wts[i] > wt) return solve(i + 1, n, wt, profit, wts);
    int ans1 = solve(i + 1, n, wt, profit, wts);
    int ans2 = profit[i] + solve(i + 1, n, wt - wts[i], profit, wts);
    return dp[wt][i] = max(ans1, ans2);
}
int knapSack(int profit [], int wts [], int W, int n){
    memset(dp, -1, sizeof(dp));
    return solve(0, n, W, profit, wts);
}
int main(){


    return 0;
}
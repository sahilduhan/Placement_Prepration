#include<bits/stdc++.h>
using namespace std;
int dp[1000001];
int solve(int n){
    if (n <= 0) return 0;
    if (dp[n] != -1) return dp[n];
    int ans1 = solve(n / 2);
    int ans2 = solve(n / 3);
    int ans3 = solve(n / 4);
    if (ans1 + ans2 + ans3 > n) return dp[n] = ans1 + ans2 + ans3;
    return dp[n] = n;
}
int maxSum(int n){
    return solve(n);
}
int main(){



    return 0;
}
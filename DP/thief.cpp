#include<bits/stdc++.h>
using namespace std;
int dp[10001];
int solve(int i, int n, int* arr){
    if (i >= n) return 0 ;
    if (dp[i] != -1) return dp[i];
    int ans1 = solve(i + 2, n, arr);
    int ans2 = solve(i, n, arr);
    return dp[i] = max(ans1, ans2);
}
int ans(int n, int arr []){
    return solve(0, n, arr);
}
int main()
{



    return 0;
}
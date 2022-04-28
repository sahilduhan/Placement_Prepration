#include<bits/stdc++.h>
using namespace std;
int fibbonacii(int n, vector<int>& dp){
    if (n <= 1) return n;

    if (dp[n] != -1) return dp[n];

    return dp[n] = fibbonacii(n - 1, dp) + fibbonacii(n - 2, dp);
}
int main(){
    int n;
    vector<int> dp(n + 1, -1);

    return 0;
}
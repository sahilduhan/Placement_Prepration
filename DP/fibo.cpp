#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[1001];
    long long int solve(long long int n){
        if (n == 1 || n == 2) return n;
        if (dp[n] != -1) return dp[n];
        return dp[n] = solve(n - 1) + solve(n - 2);
    }
    long long int nthFibonacci(long long int n){
        memset(dp, -1, sizeof(dp));
    }
};
int main(){



    return 0;
}
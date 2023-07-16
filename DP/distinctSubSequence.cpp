#include<bits/stdc++.h>
using namespace std;
int dp[701][701];
int solve(int i, int j, string a, string b){
    if (j == b.size()) return 1;
    if (i == a.size()) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    if (a[i] == b[j]){
        int ans1 = solve(i + 1, j + 1, a, b);
        int ans2 = solve(i + 1, j, a, b);
        return dp[i][j] = ans1 + ans2;
    }
    else return dp[i][j] = solve(i + 1, j, a, b);
}
int sumDistinctSubSeq(string a, string b){
    memset(dp, -1, sizeof(dp));
    return solve(0, 0, a, b);
}
int main(){



    return 0;
}
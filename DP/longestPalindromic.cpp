#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int lcs(string& a, string& b, int i, int j, vector<vector<int>>dp){
        if (i == a.length() || j == b.length()) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        int ans = 0;
        if (a[i] == b[j]) return dp[i][j] = 1 + lcs(a, b, i + 1, j + 1, dp);
        else ans = max(lcs(a, b, i + 1, j, dp), lcs(a, b, i, j + 1, dp));
        return dp[i][j] = ans;
    }
    int longestPalinSubseq(string a) {
        vector<vector<int>>dp(a.size(), vector<int>(a.size(), -1));
        string b = a;
        reverse(b.begin(), b.end());
        return lcs(a, b, 0, 0, dp);
    }
};
int main(){


    return 0;
}
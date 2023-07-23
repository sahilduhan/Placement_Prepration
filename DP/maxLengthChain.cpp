#include<bits/stdc++.h>
using namespace std;
struct val{
    int first;
    int second;
};
// this is not submitting dk why!!
int dp[10001];
int solve(int i, int n, vector<pair<int, int> >& v, int prev){
    if (i == n) return 0;
    if (dp[prev + 1] != -1) return dp[prev + 1];
    if (prev == -1 || v[prev].second < v[i].first){
        int ans1 = 1 + solve(i + 1, n, v, i);
        int ans2 = solve(i + 1, n, v, prev);
        return dp[prev + 1] = max(ans1, ans2);
    }
    else return dp[prev + 1] = solve(i + 1, n, v, prev);
}
int maxChainLen(struct val p [], int n){
    vector<pair<int, int> > v;
    for (int i = 0;i < n;i++) v.push_back({p[i].first, p[i].second});
    sort(v.begin(), v.end());
    memset(dp, -1, sizeof(dp));
    return solve(0, n, v, -1);
}
int main(){



    return 0;
}
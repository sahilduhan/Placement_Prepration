#include<bits/stdc++.h>
using namespace std;
int solve(int i, int n, int w, int* wt, int* val){
    if (i >= n || w == 0) return 0;

    if (wt[i] > w) return solve(i + 1, n, w, wt, val);
    int ans1 = val[i] + solve(i, n, w - wt[i], wt, val);
    int ans2 = solve(i + 1, n, w, wt, val);
    int ans3 = val[i] + solve(i + 1, n, w - wt[i], wt, val);

    return max(ans2, ans3);
}
int knapsack(int val [], int wt [], int W, int n){
    return solve(0, n, W, wt, val);
}
int main(){


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int t[1000][1000];

int knapsack(int wt [], int val [], int w, int n){

    memset(t, -1, sizeof(t));

    if (n == 0 || w == 0) return 0;

    if (t[n][w] != -1) return t[n][w];

    if (wt[n - 1] > w) return t[n][w] = knapsack(wt, val, w, n - 1);

    else if (wt[n - 1] < w) return t[n][w] = max((val[n - 1] + knapsack(wt, val, w, n - 1)), knapsack(wt, val, w, n - 1));

    return knapsack(wt, val, w, n - 1);
}
int main(){



    return 0;
}
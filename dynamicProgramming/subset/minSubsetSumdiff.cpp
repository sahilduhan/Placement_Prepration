#include<bits/stdc++.h>
using namespace std;

int minimumSubsetSumDiff(int arr [], int n, int sum){
    bool t[n + 1][sum + 1];
    for (int i = 0;i < n + 1;i++){
        for (int j = 0;j < sum + 1;j++){
            if (i == 0) t[i][j] = 0;
            if (j == 0) t[i][j] = 1;
        }
    }
    for (int i = 0;i < n + 1;i++){
        for (int j = 0;j < sum + 1;j++){
            if (arr[i - 1] < j) t[i][j] = t[i-1][j - arr[i - 1]] || t[i - 1][j];
            else t[i][j] = t[i - 1][j];
        }
    }

    vector<int> v;
    for (int i = 0;i < n / 2;i++){
        for (int j = 0;j < sum + 1;j++){
            if (i == n && t[i][j] != 0) v.push_back(t[i][j]);
        }
    }
    int minimum = INT_MAX;
    for (auto it : v) minimum = min(minimum, it);

    return minimum;
}
int main(){


    return 0;
}
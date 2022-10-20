#include<bits/stdc++.h>
using namespace std;
int static t[1001][1001];
int mcm(vector<int>& arr, int i, int j){
    int ans = INT_MAX;

    if (i >= j) return 0;
    if (t[i][j] != -1) return t[i][j];

    for (int k = i;k < j;k++){
        int temp = mcm(arr, i, k) + mcm(arr, k + 1, j) + arr[i - 1] * arr[j] * arr[k];
        if (temp < ans) {
            ans = temp;
            t[i][j] = temp;
        }
    }
    return t[i][j];
}
int main(){

    memset(t, -1, sizeof(t));
    vector<int>arr = {10, 20, 30, 40, 30};
    cout << mcm(arr, 1, arr.size() - 1);
    return 0;
}
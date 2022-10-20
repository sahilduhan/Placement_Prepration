#include<bits/stdc++.h>
using namespace std;
int mcm(vector<int>& arr, int i, int j){
    int ans = INT_MAX;

    if (i >= j) return 0;
    for (int k = i;k < j;k++){
        int temp = mcm(arr, i, j) + mcm(arr, j + 1, k) + arr[i - 1] + arr[j] + arr[k];
        ans = min(ans, temp);
    }
}
int main(){
    vector<int>arr = {};

    return 0;
}
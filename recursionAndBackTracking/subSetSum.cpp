#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& arr, vector<int>& ans, int idx, int n, int sum){
    if (idx == n){
        ans.push_back(sum);
        return;
    }
    solve(arr, ans, idx + 1, n, sum + arr[idx]);
    solve(arr, ans, idx + 1, n, sum);
}
vector<int> subsetSums(vector<int> arr, int N){
    vector<int>ans;
    solve(arr, ans, 0, arr.size(), 0);
    return ans;
}
int main(){



    return 0;
}
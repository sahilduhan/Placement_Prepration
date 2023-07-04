#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int idx){
    if (idx == nums.size()) {
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[idx]);
    solve(nums, temp, ans, idx + 1);
    temp.pop_back();
    solve(nums, temp, ans, idx + 1);
}
int main(){

    vector<int>arr = {3, 1, 2}, temp;
    vector<vector<int>>ans;

    solve(arr, temp, ans, 0);

    for (auto it : ans){
        for (auto it2 : it) cout << it2 << " ";
        cout << endl;
    }
    return 0;
}
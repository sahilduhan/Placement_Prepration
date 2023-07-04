#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int idx, int sum){
    if (idx == nums.size()){
        if (sum == 0) ans.push_back(temp);
        return;
    }
    temp.push_back(nums[idx]);
    solve(nums, temp, ans, idx + 1, sum - nums[idx]);
    temp.pop_back();
    solve(nums, temp, ans, idx + 1, sum);
}

bool firstSubSeqSum(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int idx, int sum){
    if (idx == nums.size()){
        if (sum == 0){
            ans.push_back(temp);
            return true;
        }
        return false;
    }
    temp.push_back(nums[idx]);

    if (firstSubSeqSum(nums, temp, ans, idx, sum - nums[idx])) return true;
    temp.pop_back();

    if (firstSubSeqSum(nums, temp, ans, idx, sum)) return true;

    return false;
}

int countSubSequencesSumK(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int idx, int sum){
    if (idx == nums.size()){
        if (sum == 0) return 1;
        return 0;
    }
    temp.push_back(nums[idx]);
    int l = countSubSequencesSumK(nums, temp, ans, idx + 1, sum - nums[idx]);
    temp.pop_back();
    int r = countSubSequencesSumK(nums, temp, ans, idx + 1, sum);
    return l + r;
}

int main(){
    vector<int>arr = {3, 1, 2}, temp;
    vector<vector<int>>ans;

    solve(arr, temp, ans, 0, 10);

    for (auto it : ans){
        for (auto it2 : it) cout << it2 << " ";
        cout << endl;
    }

    return 0;
}
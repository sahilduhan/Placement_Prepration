#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(int i, vector<int>& candidates, vector<vector<int>>ans, int target, vector<int>& temp){
        if (i == candidates.size() and target == 0){
            ans.push_back(temp);
            return;
        }
        if (candidates[i] < target){
            temp.push_back(candidates[i]);
            solve(i, candidates, ans, target - candidates[i], temp);
            temp.pop_back();
        }
        solve(i + 1, candidates, ans, target, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        
    }
};
int main(){

    return 0;
}
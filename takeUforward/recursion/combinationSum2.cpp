#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(int ind, vector<int>& candidates, vector<vector<int>>ans, int target, vector<int>& temp){
        if (ind == candidates.size() and target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = ind;i < candidates.size();i++){
            if (i > ind and candidates[i] == candidates[i - 1]) continue;
            if (candidates[i] > target) break;

            temp.push_back(candidates[i]);
            solve(i + 1, candidates, ans, target, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        solve(0, candidates, ans, target, temp);

    }
};
int main(){

    return 0;
}
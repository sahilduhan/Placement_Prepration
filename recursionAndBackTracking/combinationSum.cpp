#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>temp, vector<int>& candidates, int target, int idx){
        if (target == 0){
            ans.push_back(temp);
            return;
        }
        if (target < 0) return;
        for (int i = idx;i < candidates.size();i++){
            if (i > idx && candidates[i] == candidates[i - 1]) continue;
            temp.push_back(candidates[i]);
            solve(ans, temp, candidates, target - candidates[i], i + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        solve(ans, temp, candidates, target, 0);
        return ans;
    }
};
int main(){



    return 0;
}
#include <bits/stdc++.h>
using namespace std;
vector<int> towSum(vector<int>& nums, int target){
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size();++i){
        if (mp.find(target - nums[i]) != mp.end()){
            ans.push_back(mp[target - nums[i]]);
            ans.push_back(i);
            return ans;
        }
        mp[nums[i]] = i;
    }

}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int target = 11;


    return 0;
}
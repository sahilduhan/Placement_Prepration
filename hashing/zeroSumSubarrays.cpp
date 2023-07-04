#include<bits/stdc++.h>
using namespace std;
int zeroSumSubArrays(vector<int>& nums){
    int ans = 0, sum = 0;
    unordered_map<int, int>mp;
    mp[0] = 1;
    for (int i = 0;i < nums.size();i++){
        sum += nums[i];
        mp[sum]++;
    }
    for (auto it : mp){
        auto n = it.second;
        ans += ((n) * (n - 1)) / 2;
    }
    return ans;
}
int main(){



    return 0;
}
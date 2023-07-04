#include<bits/stdc++.h>
using namespace std;
bool validPairs(vector<int>& nums){
    unordered_map<int, int>mp;
    for (int i = 0;i < nums.size();i++){
        for (int j = i + 1;j < nums.size();j++){
            long long sum = nums[i] + nums[j];
            if (mp.count(sum)) return 1;
            mp[sum] = 1;
        }
    }
    return -1;
}
int main(){


    return 0;
}
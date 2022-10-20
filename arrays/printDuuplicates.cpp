#include<bits/stdc++.h>
using namespace std;
vector<int>dupluicate(vector<int>& nums){
    vector<int>ans;
    unordered_map<int, int> mp;
    for (auto it : nums) mp[it]++;

    for (auto it : mp) {

        if (it.second > 1) ans.push_back(it.first);
    }
    return ans;
}
int main(){

    return 0;
}
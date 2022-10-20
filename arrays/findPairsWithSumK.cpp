#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>>pairsWithhSuumK(vector<int>& nums, int sum){
    vector<pair<int, int>>ans;
    int i = 0, j = nums.size() - 1;
    while (i < j){
        if (nums[i] + nums[j] == sum){
            ans.push_back({nums[i], nums[j]});
            i++; j--;
        }
        else if (nums[i] + nums[j] > sum) j--;
        else i++;
    }
}
int main(){

    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto it : arr) cout << it << " ";
    cout << endl;
    return 0;
}
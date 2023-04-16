#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int k){
    int j = 0, ans = INT_MIN, sum = 0;
    for (int i = 0;i < nums.size();i++){
        sum += nums[i];
        if (i - j + 1 < k) i++;
        else {
            ans = max(ans, sum);
            ans -= nums[j];
            j++;
            i++;
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {2, 1, 5, 1, 3, 2};
    cout << solve(nums, 3) << endl;
    return 0;
}
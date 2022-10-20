#include<bits/stdc++.h>
using namespace std;
int slidingWindow(vector<int>& nums, int k){
    int sum = 0, ans = INT_MIN;
    int i = 0, j = 0;
    while (j < nums.size()){
        sum += nums[j];
        if (j - i + 1 < k) j++;
        else if (j - i + 1 == k){
            ans = max(sum, ans);
            sum -= nums[i];
            i++; j++;
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {1, 2, 3, 4, 6, 1, 8};
    int ans = slidingWindow(nums, 2);
    cout << ans << endl;
    return 0;
}
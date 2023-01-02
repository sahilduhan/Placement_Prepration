#include<bits/stdc++.h>
using namespace std;
vector < vector<int>>threeSum(vector<int>& nums, int k){
    vector<vector<int>>ans;
    if (nums.size() == 0) return ans;
    sort(nums.begin(), nums.end());
    for (int i = 0;i < nums.size() - 2;i++){
        int start = i + 1, end = nums.size() - 1, sum = 0 - nums[i];
        vector<int>temp;
        while (start < end){
            if (nums[i] + nums[start] + nums[end] == sum){
                ans.push_back({nums[i], nums[start], nums[end]});
                while (start < end and nums[start] == nums[end]) start++;
                while (start < end and nums[end] == nums[start]) end--;
                start++; end--;
            }
            else if (nums[i] + nums[start] + nums[end] > k) end--;
            else start++;
        }
    }
    return ans;
}


// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> res;
//         sort(nums.begin(), nums.end());
//         for (int i = 0; i < (int)(nums.size()) - 2; i++) {
//             if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {
//                 int lo = i + 1, hi = (int)(nums.size()) - 1, sum = 0 - nums[i];
//                 while (lo < hi) {
//                     if (nums[lo] + nums[hi] == sum) {
//                         res.push_back({nums[i],nums[lo],nums[hi]});
//                         while (lo < hi && nums[lo] == nums[lo + 1]) lo++;
//                         while (lo < hi && nums[hi] == nums[hi - 1]) hi--;
//                         lo++; hi--;
//                     }
//                     else if (nums[lo] + nums[hi] < sum) lo++;
//                     else hi--;
//                 }
//             }
//         }
//         return res;
//     }
// };
int main(){
    vector<int>nums = {-1, 0, 1, 2, -1, -4};


    return 0;
}
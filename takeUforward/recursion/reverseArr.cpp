#include<bits/stdc++.h>
using namespace std;
// void reverseArr(vector<int>& nums){
//     int l = 0, r = nums.size() - 1;
//     if (l >= r) return;
//     swap(nums[l], nums[r]);
//     l++, r--;
//     reverseArr(nums);
// }
void reverseArr(int i, vector<int>& nums){
    int n = nums.size();
    if (i >= n / 2) return;
    swap(nums[i], nums[n - i - 1]);
    reverseArr(i + 1, nums);
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverseArr(0, nums);
    for (auto it : nums) cout << it << " " << endl;
    return 0;
}
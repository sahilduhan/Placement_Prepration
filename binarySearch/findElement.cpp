#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, ans = -1;
        while (left < right) {
            int mid = left + right / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] <= nums[right]){

            }
        }

    }
};
int main(){


    return 0;
}
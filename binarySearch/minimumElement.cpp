#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0, e = n - 1, mid;
        while (s <= e){
            mid = s + (e - s) / 2;
            int next = (mid + 1) % n;
            int prev = (mid - 1 + n) % n;
            if (nums[s] <= nums[e]) return nums[s];
            else if (nums[mid] <= nums[prev] && nums[mid] <= nums[next])return nums[mid];
            else if (nums[s] <= nums[mid]) s = mid + 1;
            else if (nums[mid] <= nums[e]) e = mid - 1;
        }
        return nums[mid];
    }
};
int main(){

    return 0;
}
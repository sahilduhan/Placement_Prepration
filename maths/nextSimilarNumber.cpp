#include<bits/stdc++.h>
using namespace std;
vector<int>nextSimilar(vector<int>& nums){
    int n = nums.size();
    int k;
    for (k = n - 2;k >= 0;k--){
        if (nums[k] < nums[k + 1]) break;
    }
    if (k < 0){
        sort(nums.begin(), nums.end());
        return nums;
    }
    int l = n - 1;
    for (l;l > k;l--){
        if (nums[l] > nums[k]) break;
    }
    swap(nums[l], nums[k]);

}
int main(){



    return 0;
}
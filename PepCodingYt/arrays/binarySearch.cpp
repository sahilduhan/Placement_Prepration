#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target)
{
    int start = 0, size = nums.size();
    int end = size - 1;

    while (start <= end){
        int mid = (start + end) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] > target) end = mid - 1;
        else start = mid + 1;
    }

    return -1;
}
int main(){

    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << search(arr, 3);
    // for (auto it : arr) cout << it << " ";
    // cout << endl;
    return 0;
}
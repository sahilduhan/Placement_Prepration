#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& nums){
    int profit = 0, minELe = nums[0];
    for (int i = 1;i < nums.size();i++){
        minELe = min(nums[i], minELe);
        int cost = nums[i] - minELe;
        profit = max(profit, cost);
    }
    return profit;
}
int main(){


    return 0;
}
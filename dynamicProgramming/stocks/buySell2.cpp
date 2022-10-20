#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& nums){
    int profit = 0;
    for (int i = 1;i < nums.size();i++){
        if (nums[i] > nums[i - 1]) profit += nums[i] - nums[i - 1];
    }
    return profit;
}
// dp solution

int f(int i, int buy, vector<int>& nums){
    if (i == nums.size()) return 0;

    int profit = 0;
    if (buy){

    }
    else {

    }
}
int main(){


    return 0;
}
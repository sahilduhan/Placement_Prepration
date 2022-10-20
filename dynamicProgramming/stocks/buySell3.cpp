#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int profit = INT_MIN;
    int solve(int i, bool buy, vector<int>& prices, int transaction){
        if (i == prices.size() || transaction == 0) return 0;
        if (buy == 1) profit = max((0 + solve(i + 1, 1, prices, transaction)), (solve(i + 1, 0, prices, transaction) - prices[i]));
        else profit = max((0 + solve(i + 1, 0, prices, transaction)), (solve(i + 1, 1, prices, transaction - 1) + prices[i]));
        return profit;
    }
    int maxProfit(vector<int>& prices) {
        return solve(0, 1, prices, 2);
    }
};
int main(){



    return 0;
}
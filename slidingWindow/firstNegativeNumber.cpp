#include<bits/stdc++.h>
using namespace std;
vector<int>firstNegatvie(vector<int>& nums, int k){
    int i = 0, j = 0;
    queue<int>q;
    vector<int>ans;
    while (j < nums.size()){
        if (nums[j] < 0) q.push(nums[i]);
        if (j - i + 1 < k) j++;
        else if (j - i + 1 == k) {
            if (q.size() == 0) ans.push_back(0);
            else {
                ans.push_back(q.front());
                if (nums[i] == q.front()) q.pop();
            }
            i++;
            j++;
        }
        return ans;
    }
}
int main(){


    return 0;
}
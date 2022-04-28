#include<bits/stdc++.h>
using namespace std;
void printdsuence(int i, vector<int>& ds, vector<int>& nums){
    int n = nums.size();
    if (i >= n){
        for (auto it : ds) cout << it << " ";
        cout << endl;
        return;
    }
    // to add the element in the dsuence
    ds.push_back(nums[i]);
    printdsuence(i + 1, ds, nums);
    ds.pop_back(nums[i]);
    printdsuence(i + 1, ds, nums);

}
int main(){
    vector<int>nums = {3, 1, 2};
    vector<int>ds;
    printdsuence(0, ds, nums);

    return 0;
}
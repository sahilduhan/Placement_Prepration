#include<bits/stdc++.h>
using namespace std;
void segregate(vector<int>nums){

    int j = 0;
    for (int i = 0;i < nums.size();i++){
        if (nums[i] == 0){
            nums[j++] = nums[i];
        }
        while (j < nums.size()){
            nums[j++] = 1;
        }
    }
}
int main(){

    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto it : arr) cout << it << " ";
    cout << endl;
    return 0;
}
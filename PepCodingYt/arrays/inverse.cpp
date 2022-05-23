#include<bits/stdc++.h>
using namespace std;
vector<int> inverseArr(vector<int>& arr){
    vector<int>ans;
    for (int i = 0;i < arr.size();i++){
        int t = arr[i];
        ans[i] = i;
    }
    return ans;
}
int main(){

    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    inverseArr(arr);
    vector<int> ans = inverseArr(arr);
    for (auto it : ans) cout << it << " ";
    return 0;
}
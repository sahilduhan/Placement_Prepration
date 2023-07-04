#include<bits/stdc++.h>
using namespace std;
// interviewbit problem
vector<vector<int>>solve(vector<string>arr){
    vector<vector<int>>ans;
    unordered_map<string, vector<int>> mp;
    for (int i = 0;i < arr.size();i++){
        string str = arr[i];
        sort(str.begin(), str.end());
        if (mp.count(str)) mp[str].push_back(i);
        else mp[str].push_back(i);
    }
    for (auto it : mp){
        ans.push_back(it.second);
    }
    return ans;
}
int main(){


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<int>solve(vector<int>& arr){
    unordered_map<int, int>mp;
    int sum = 0, ans = 0, id = -1;
    for (int i = 0;i < arr.size();i++){
        sum += arr[i];
        if (mp.count(sum) == 0){
            mp[sum] = i;
            continue;
        }
        int len = i - mp[sum];
        if (len > ans){
            ans = len;
            id = mp[sum];
        }
    }
    vector<int>answer;
    for (int i = 0;i < arr.size();i++){
        answer.push_back(arr[id + 1]);
        id++;
    }
    return answer;
}
int main(){


    return 0;
}
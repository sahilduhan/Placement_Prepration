#include<bits/stdc++.h>
using namespace std;


int main(){

    unordered_map<int, int>mp;
    // map<int,int>mp;

    vector<int>arr = {1, 2, 1, 2, 3, 3, 4, 6, 3, 5};

    // for (int i = 0;i < arr.size();i++){
    //     mp[arr[i]]++;
    // }

    for (auto it : arr) mp[it]++;

    // for (auto it : mp){
    //     cout << it.first << " " << it.second << endl;
    // }

    if (mp.find(2) != mp.end()) cout << "found" << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1, 2, -3, 1, -1, -2, -5, 8};
    int size = arr.size();
    int prefixVal = 0;
    vector<int>prefix;

    unordered_map<int, int> m;

    for (int i = 0;i < arr.size();i++){
        prefixVal += arr[i];
        m[prefixVal]++;
        // prefix.push_back(prefixVal);
    }
    unordered_map<int, int>::iterator it;
    for (it = m.begin();it != m.end(); it++){
        int val = it->second;
        val += (val * (val)) / 2;
        if (it->second == 0) val += it->second;
    }

    return 0;
}
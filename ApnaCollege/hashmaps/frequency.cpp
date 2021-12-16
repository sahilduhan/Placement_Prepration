#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr = {1, 1, 1, 2, 3, 4, 3, 2, 4, 2, 31, 1, 3, 1};
    unordered_map<int, int> m;
    unordered_map<int, int>::iterator i;
    for (int i = 0; i < arr.size();i++){
        m[arr[i]]++;
    }

    for (auto it : m) cout << it.first << " -> " << it.second << endl;

    return 0;
}
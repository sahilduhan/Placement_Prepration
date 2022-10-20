#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr = {5, 3, 4, 2, 1};

    for (int i = 0;i < arr.size();i++){
        for (int j = i + 1;j < arr.size();j++){
            if (arr[j] < arr[i]) swap(arr[j], arr[i]);
        }
    }

    for (auto it : arr) cout << it << " ";


    return 0;
}
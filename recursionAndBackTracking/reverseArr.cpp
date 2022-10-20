#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& arr, int start, int end){
    if (start >= end) return;
    swap(arr[start], arr[end]);
    solve(arr, start + 1, end - 1);
}
void rev(vector<int>& arr, int i){
    if (i > arr.size() / 2) return;

    swap(arr[i], arr[arr.size() - i - 1]);
    rev(arr, i + 1);
}
int main(){

    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rev(arr, 0);
    for (auto it : arr) cout << it << " ";
    cout << endl;
    return 0;
}
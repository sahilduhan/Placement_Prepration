#include <bits/stdc++.h>
using namespace std;
bool descendingSortedArr(vector<int>& arr, int val){
    int start = 0, end = arr.size() - 1;
    while (start < end){
        int mid = start + (end - start) / 2;
        if (val == arr[mid]) return true;
        else if (val < arr[mid]) start = mid + 1;
        else end = mid - 1;
    }
    return false;
}
int main(){
    vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int val = 2;
    bool ans = descendingSortedArr(arr, val);
    return 0;
}
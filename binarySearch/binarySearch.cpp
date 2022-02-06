#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int>& arr, int target){
    int start = 0, end = arr.size() - 1;

    while (start < end){
        int mid = (start)+ (end - start) / 2;
        if (target == arr[mid]) return true;
        else if (target < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return false;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int val = 3;
    bool ans = binarySearch(arr, val);
    cout << ans << endl;
    return 0;
}
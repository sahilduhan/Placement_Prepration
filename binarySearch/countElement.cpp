#include <bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int>& arr, int val){
    int start = 0, end = arr.size() - 1, res = -1;
    while (start < end){
        int mid = start + (end - start) / 2;
        if (val == arr[mid]){
            res = mid;
            end = mid - 1;
        }
        else if (val < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return res;
}
int lastOccurence(vector<int>& arr, int val){
    int start = 0, end = arr.size() - 1, res = -1;

    while (start < end){
        int mid = start + (end - start) / 2;
        if (val == arr[mid]){
            res = mid;
            start = mid + 1;
        }
        else if (val < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return res;
}
int coutVal(vector<int>& arr, int val){
    int first = firstOccurence(arr, val);
    int last = lastOccurence(arr, val);

    return last - first + 1;
}
int main(){
    vector<int>arr = {1, 2, 3, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 9};
    int val = 3;
    int ans = coutVal(arr, val);
    cout << ans << endl;
    return 0;
}
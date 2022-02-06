#include <bits/stdc++.h>
using namespace std;
int numberOftimesArrRoated(vector<int>& arr){
    int start = 0, end = arr.size() - 1;

    while (start <= end){
        int mid = start + (end - start) / 2;
        int prev, next;
        prev = arr[mid - 1] % arr.size();
        next = arr[mid + arr.size() - 1] % arr.size();
        if (arr[mid] <= arr[prev] && arr[mid] < arr[next]) return mid;
        if (arr[start] < arr[mid]) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}
int main(){
    vector<int>arr = {11, 12, 15, 18, 2, 5, 6, 8};
    int ans = numberOftimesArrRoated(arr);
    cout << ans << endl;


    return 0;
}
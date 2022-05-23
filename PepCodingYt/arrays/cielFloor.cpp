#include<bits/stdc++.h>
using namespace std;
void cielFloor(vector<int>& arr, int n){
    int l = 0, h = arr.size();
    int ciel = 0, floor = 0;
    while (l < h){
        int mid = l + h / 2;
        if (arr[mid] == n){
            ciel = mid;
            floor = mid;
        }
        else if (arr[mid] > n){
            l = mid + 1;
            floor = arr[mid];
        }
        else {
            h = mid - 1;
            floor = arr[mid];
        }
    }
}
int main(){

    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto it : arr) cout << it << " ";
    cout << endl;
    return 0;
}
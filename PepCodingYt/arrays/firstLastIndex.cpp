#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr = {10, 10, 10, 20, 20, 20, 20, 30, 40, 40};

    int l = 0, h = arr.size(), target = 20;
    int last = 0, first = 0;

    while (l < h){
        int mid = l + h / 2;
        if (target > arr[mid]) l = mid + 1;
        else if (target < arr[mid]) h = mid - 1;
        else {
            last = mid;
            h = mid - 1;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int start, int mid, int end){
    vector<int> temp;
    int left = start, right = mid + 1;
    while (left <= mid && right <= end){
        if (arr[left] <= arr[right])temp.push_back(arr[left++]);
        else temp.push_back(arr[right++]);
    }
    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= end) temp.push_back(arr[right++]);
    for(int i=0;i<temp.size();i++) arr[i] = temp[i];
}

void solve(vector<int> &arr, int start, int end){
    if (start >= end) return;
    int mid = start + (end - start) / 2;
    solve(arr, start, mid);
    solve(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

void mergeSort(vector<int> &arr, int n){
    solve(arr, 0, n - 1);
}
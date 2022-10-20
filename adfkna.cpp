#include<bits/stdc++.h>
using namespace std;

// returns required number of subarrays
int numOfsubarrays(int arr [], int n)
{
    int count = 0; // Initialize result

    // checking each subarray
    for (int i = 0;i < n;i++){
        for (int j = i + 1;j < n;j++){
            int sum = arr[i] + arr[j];
        }
    }
}

// driver function
int main()
{
    int arr [] = {1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << numOfsubarrays(arr, n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool subsetSum(int arr [], int sum, int n){
    int t[n + 1][sum + 1];

    for (int i = 0;i < n + 1;i++){
        for (int j = 0;j < sum + 1;j++){
            if (i == 0) t[i][j] == 0;
            if (j == 0) t[i][j] == 1;
        }
    }

    for (int i = 0;i < n + 1;i++){
        for (int j = 0;j < sum + 1;j++){
            if (arr[i] < j) t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];

            else t[i][j] = t[i - 1][j];
        }
    }
    return t[n][sum];


}
bool equalSumPartition(int arr [], int n){
    int sum = 0;
    for (int i = 0;i < n;i++) sum += arr[i];
    return subsetSum(arr, sum / 2, n);
}
int main(){


    return 0;
}
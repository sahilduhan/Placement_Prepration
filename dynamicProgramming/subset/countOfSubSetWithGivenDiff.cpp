#include<bits/stdc++.h>
using namespace std;
int sumOfArr(int arr [], int diff, int n){
    int sum = 0;
    for (int i = 0;i < n + 1;i++) sum += arr[i];
    int mainSum = sum + diff / 2;
    return mainSum;

}
int countSubsetWithGivendiff(int arr [], int diff, int n){
    int sum = sumOfArr(arr, diff, n);
    bool t[n + 1][sum + 1];
    for (int i = 0;i < n + 1;i++){
        for (int j = 0;j < sum + 1;j++){
            if (i == 0) t[i][j] = 0;
            if (j == 0) t[i][j] = 1;
        }
    }
    for (int i = 0;i < n + 1;i++){
        for (int j = 0;j < sum + 1;j++){
            if (arr[i] < j) t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
            else t[i][j] = t[i - 1][j];
        }
    }
    return t[n][sum];
}
int main(){


    return 0;
}
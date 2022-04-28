#include<bits/stdc++.h>
using namespace std;
int countSequence(int i, int s, int sum, int arr [], int n){

    if (i == n){
        if (s == sum) return 1;
        return 0;
    }

    s += arr[i];
    int left = countSequence(i + 1, s, sum, arr, n);

    s -= arr[i];
    int right = countSequence(i + 1, s, sum, arr, n);

    return left + right;
}

int main(){

    int arr [] = {1, 2, 1};
    int n = 3;
    int sum = 3;
    // vector<int>ds;
    countSequence(0, 0, sum, arr, n);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string a, int i, int j){
    while (i != j){
        if (a[i] != a[j]) return false;
        i++; j--;


    }
    return true;
}
int minPartition(string a, int i, int j){
    int ans = INT_MAX;

    if (i >= j) return 0;

    if (isPalindrome(a, i, j)) return 0;

    for (int k = i;k < j;k++){
        int temp = minPartition(a, i, k) + minPartition(a, k + 1, j) + 1;
        ans = min(ans, temp);
    }
    return ans;
}
int main(){


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long int MOD = 1e9 + 7;
long long int solve(int i, int sum, int* arr){
    if (sum == 0) return 1;
    if (i == 3 || sum < 0) return 0;
    int pick = solve(i, sum - arr[i], arr);
    int notPick = solve(i + 1, sum - arr[i], arr);
    return (pick + notPick) % MOD;
}
long long int count(long long int n){
    int arr[3] = {3, 5, 10};
    return solve(0, n, arr);

}
int main(){



    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int climbingStairs(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    int left = climbingStairs(n - 1);
    int right = climbingStairs(n - 2);

    return left + right;
}
int main(){


    return 0;
}
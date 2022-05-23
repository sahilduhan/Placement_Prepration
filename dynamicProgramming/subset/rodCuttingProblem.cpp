#include<bits/stdc++.h>
using namespace std;
int maxProfitOfRodCutting(int length [], int profit [], int n, int capacity){
    int t[n + 1][capacity + 1];
    for (int i = 0;i < n + 1;i++){
        for (int j = 0;j < capacity + 1;j++){
            if (i == 0 || j == 0) t[i][j] = 0;
        }
    }
    for (int i = 0;i < n + 1;i++){
        for (int j = 0;j < capacity + 1;j++){
            if (length[i - 1] < capacity) t[i][j] = max((profit[i - 1] + t[i][j - length[i - 1]]), t[i - 1][j]);
            else t[i][j] = t[i - 1][j];
        }
    }
    return t[n][capacity];
}
int main(){


    return 0;
}
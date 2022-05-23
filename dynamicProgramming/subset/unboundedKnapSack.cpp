#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt [], int val [], int w, int n){
    int t[w + 1][n + 1];
    for (int i = 0;i < n + 1;i++){
        for (int j = 0;j < w + 1;j++){
            if (i == 0) t[i][j] = 0;
            if (j == 0) t[i][j] = 1;
        }
    }
    for (int i = 0;i < n + 1;i++){
        for (int j = 0;j < w + 1;j++){
            if (wt[i - 1] < w) t[i][j] = max((val[i - 1] + t[i][j - wt[i - 1]]), t[i - 1][j]);
            else t[i][j] = t[i - 1][j];
        }
    }

}
int main(){


    return 0;
}
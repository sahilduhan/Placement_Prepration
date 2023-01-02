#include<bits/stdc++.h>
using namespace std;
void dfs(int i, int j, int m, int n, vector<vector<int>>arr){
    if (i < 0 || j < 0 || i > m || j > m || arr[i][j] == 0) return;
    arr[i][j] = 0;
    dfs(i + 1, j, m, n, arr);
    dfs(i, j + 1, m, n, arr);
    dfs(i - 1, j, m, n, arr);
    dfs(i, j - 1, m, n, arr);
}
int main(){

    vector<vector<int>>arr;
    int count = 0, m = arr.size(), n = arr[0].size();
    for (int i = 0;i < m;i++){
        for (int j = 0;j < n;j++){
            if (arr[i][j] == 1){
                dfs(i, j, m, n, arr);
                count++;
            }
        }
    }


    return 0;
}
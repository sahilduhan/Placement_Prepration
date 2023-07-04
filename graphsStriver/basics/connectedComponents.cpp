#include<bits/stdc++.h>
using namespace std;
void dfs(int i, int j, int m, int n, vector<vector<char>>& grid){
    if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] != '1') return;
    grid[i][j] = '2';
    dfs(i + 1, j, m, n, grid);
    dfs(i, j + 1, m, n, grid);
    dfs(i - 1, j, m, n, grid);
    dfs(i, j - 1, m, n, grid);
    dfs(i + 1, j + 1, m, n, grid);
    dfs(i - 1, j - 1, m, n, grid);
    dfs(i + 1, j - 1, m, n, grid);
    dfs(i - 1, j + 1, m, n, grid);
}
int numIslands(vector<vector<char>>& grid) {
    // Code here
    int m = grid.size(), n = grid[0].size(), count = 0;
    for (int i = 0;i < m;i++){
        for (int j = 0;j < n;j++){
            if (grid[i][j] == '1'){
                dfs(i, j, m, n, grid);
                count++;
            }
        }
    }
    return count;
}
int main(){


    return 0;
}
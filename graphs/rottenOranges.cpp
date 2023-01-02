#include<bits/stdc++.h>
using namespace std;
void dfs(int i, int j, int m, int n, vector<vector<int>>& grid, int time){
    if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0 || (grid[i][j] <= time and grid[i][j] > 1)) return;
    grid[i][j] = time;
    dfs(i + 1, j, m, n, grid, time + 1);
    dfs(i, j + 1, m, n, grid, time + 1);
    dfs(i - 1, j, m, n, grid, time + 1);
    dfs(i, j - 1, m, n, grid, time + 1);
}
int main(){

    vector<vector<int>>grid;
    int m = grid.size(), n = grid[0].size(), time = 2;
    for (int i = 0;i < m;i++){
        for (int j = 0;j < n;j++){
            if (grid[i][j] == 2) dfs(i, j, m, n, grid, time);
        }
    }

    for (auto row : grid){
        for (auto col : row){
            if (col == 1) cout << "-1" << endl;
            time = max(time, col);
        }
    }
    cout << time << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>>& grid, int time){
    int m = grid.size(), n = grid[0].size();
    if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0 || (grid[i][j] > 1 and grid[i][j] < time)) return;
    grid[i][j] = time;
    dfs(i + 1, j, grid, time + 1);
    dfs(i, j + 1, grid, time + 1);
    dfs(i - 1, j, grid, time + 1);
    dfs(i, j - 1, grid, time + 1);
}
int orangesRotting(vector<vector<int>>& grid) {
    int time = 2;
    for (int i = 0;i < grid.size();i++){
        for (int j = 0;j < grid[0].size();j++){
            if (grid[i][j] == 2) dfs(i, j, grid, time);
        }
    }
    for (auto it1 : grid){
        for (auto it2 : it1){
            if (it2 == 1) return -1;
            time = max(time, it2);
        }
    }
    return time - 2;
}
int main(){


    return 0;
}
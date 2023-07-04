#include<bits/stdc++.h>
using namespace std;
void dfs(int i, int j, vector<vector<int>>& grid){
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1) return;
    grid[i][j] = 2;
    dfs(i + 1, j, grid);
    dfs(i, j + 1, grid);
    dfs(i - 1, j, grid);
    dfs(i, j - 1, grid);
}
int numberOfEnclaves(vector<vector<int>>& grid) {
    for (int i = 0;i < grid.size();i++){
        for (int j = 0;j < grid[0].size();j++){
            if ((i == 0 || j == 0 || i == grid.size() - 1 || j == grid[0].size() - 1) and grid[i][j] == 1) dfs(i, j, grid);
        }
    }
    int count = 0;
    for (int i = 0;i < grid.size();i++){
        for (int j = 0;j < grid[0].size();j++){
            if (grid[i][j] == 1) count++;
        }
    }
    return count;
}
int main(){



    return 0;
}
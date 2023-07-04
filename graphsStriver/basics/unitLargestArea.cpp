#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>>& grid, int& sum){
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0) return;
    sum = sum + grid[i][j];
    grid[i][j] = 0;
    dfs(i + 1, j, grid, sum);
    dfs(i - 1, j, grid, sum);
    dfs(i, j + 1, grid, sum);
    dfs(i, j - 1, grid, sum);
    dfs(i + 1, j - 1, grid, sum);
    dfs(i + 1, j + 1, grid, sum);
    dfs(i - 1, j - 1, grid, sum);
    dfs(i - 1, j + 1, grid, sum);
    return;
}

int findMaxArea(vector<vector<int>>& grid) {
    int row = grid.size(), col = grid[0].size(), ans = 0, sum = 0;
    for (int i = 0;i < row;i++){
        for (int j = 0;j < col;j++){
            if (grid[i][j] == 1){
                dfs(i, j, grid, sum);
                ans = max(ans, sum);
                sum = 0;
            }
        }
    }
    return ans;
}
int main(){


    return 0;
}
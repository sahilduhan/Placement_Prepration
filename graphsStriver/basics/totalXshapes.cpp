#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<char>>& grid){
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != '1') return;
    grid[i][j] = 'O';
    dfs(i + 1, j, grid);
    dfs(i - 1, j, grid);
    dfs(i, j + 1, grid);
    dfs(i, j - 1, grid);
    return;
}

int xShape(vector<vector<char>>& grid)
{
    int row = grid.size(), col = grid[0].size(), ans = 0;
    for (int i = 0;i < row;i++){
        for (int j = 0;j < col;j++){
            if (grid[i][j] == 'X'){
                dfs(i, j, grid);
                ans++;
            }
        }
    }
    return ans;
}
int main(){



    return 0;
}
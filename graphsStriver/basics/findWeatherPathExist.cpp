#include<bits/stdc++.h>
using namespace std;
bool solve(int i, int j, vector<vector<int>>& grid){
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0) return false;
    if (grid[i][j] == 2) return true;
    grid[i][j] = 0;
    return solve(i + 1, j, grid) || solve(i, j + 1, grid) || solve(i - 1, j, grid) || solve(i, j - 1, grid);
}
bool is_Possible(vector<vector<int>>& grid){
    for (int i = 0;i < grid.size();i++){
        for (int j = 0;j < grid[0].size();j++){
            if (grid[i][j] == 1) return solve(i, j, grid);
        }
    }
    return false;
}
int main(){


    return 0;
}
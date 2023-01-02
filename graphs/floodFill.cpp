#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, int node, int color, vector<vector<int>>& grid){
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == color || grid[i][j] != node) return;
    grid[i][j] = color;
    dfs(i + 1, j, node, color, grid);
    dfs(i, j + 1, node, color, grid);
    dfs(i - 1, j, node, color, grid);
    dfs(i, j - 1, node, color, grid);
}
int main(){
    int n, e;
    cin >> n >> e;
    vector<int>adj[n];
    for (int i = 0;i < e;i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<vector<int>>grid;
    dfs(0, 0, 0, 1, grid);

    for (int i = 0;i < grid.size();i++){
        for (int j = 0;j < grid[0].size();j++) cout << grid[i][j] << " ";
        cout << endl;
    }
    return 0;
}
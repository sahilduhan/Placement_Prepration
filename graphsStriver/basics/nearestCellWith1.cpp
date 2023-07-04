#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>nearest(vector<vector<int>>grid){
    int m = grid.size(), n = grid[0].size();
    vector<vector<bool>>vis(m, vector<bool>(n, 0));
    vector<vector<int>>dis(m, vector<int>(n, 0));
    queue < pair<pair<int, int>, int>>q;
    for (int i = 0;i < m;i++){
        for (int j = 0;j < n;j++){
            if (grid[i][j] == 1) {
                q.push({{i, j}, 0});
                vis[i][j] = 1;
            }
        }
    }
    vector<int>delRow = {-1, 0, +1, 0};
    vector<int>delCol = {0, +1, 0, -1};

    while (!q.empty()){
        int row = q.front().first.first;
        int col = q.front().first.second;
        int steps = q.front().second;

        q.pop();

        for (int i = 0;i < 4;i++){
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if (nRow >= 0 and nRow < m and nCol >= 0 and nCol < n and vis[nRow][nCol] == 0){
                vis[nRow][nCol] = 1;
                q.push({{nRow, nCol}, steps + 1});
            }
        }
    }
    return dis;
}
int main(){



    return 0;
}
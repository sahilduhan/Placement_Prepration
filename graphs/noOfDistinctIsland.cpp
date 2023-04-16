#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& a, int i, int j, int parRow, int parCol, int n, int m, vector<pair<int, int>>& v){

    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == 0) return;
    v.push_back({i - parRow, j - parCol});
    a[i][j] = 0;
    dfs(a, i + 1, j, parRow, parCol, n, m, v);
    dfs(a, i - 1, j, parRow, parCol, n, m, v);
    dfs(a, i, j + 1, parRow, parCol, n, m, v);
    dfs(a, i, j - 1, parRow, parCol, n, m, v);
}

int countDistinctIslands(vector<vector<int>>& grid) {

    int cnt = 0, n = grid.size(), m = grid[0].size();
    set<vector<pair<int, int>>>st;
    for (int i = 0;i < grid.size();i++){
        for (int j = 0;j < grid[0].size();j++){
            if (grid[i][j] == 1){
                vector<pair<int, int>>v;
                dfs(grid, i, j, i, j, n, m, v);
                st.insert(v);
            }
        }
    }
    return st.size();
}
int main(){



    return 0;
}
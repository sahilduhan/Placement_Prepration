#include<bits/stdc++.h>
using namespace std;
bool dfs(int i, int j, int di, int dj, int k, string& word, vector<vector<char>>& grid){
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != word[k]) return false;
    if (k == (word.size() - 1)) return true;

    return dfs(i + di, j + dj, di, dj, k + 1, word, grid);
}
vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
    vector<vector<int>>ans;
    vector<int>di = {0, -1, -1, -1, 0, 1, 1, 1};
    vector<int>dj = {-1, -1, 0, 1, 1, 1, 0, -1};

    for (int i = 0;i < grid.size();i++){
        for (int j = 0;j < grid[0].size();++j){
            if (grid[i][j] == word[0]){
                for (int k = 0;k < 8;k++){
                    if (dfs(i, j, di[k], dj[k], 0, word, grid)){
                        ans.push_back({i, j});
                        break;
                    }
                }
            }
        }
    }
    return ans;
}
int main(){



    return 0;
}
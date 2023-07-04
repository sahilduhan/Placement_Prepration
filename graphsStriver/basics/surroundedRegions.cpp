#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>>& mat, int i, int j){
    if (i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size() || mat[i][j] != 'O') return;
    mat[i][j] = '*';
    dfs(mat, i + 1, j);
    dfs(mat, i, j + 1);
    dfs(mat, i - 1, j);
    dfs(mat, i, j - 1);

}

vector<vector<char>> fill(int n, int m, vector<vector<char>> mat){
    for (int i = 0;i < mat.size();i++){
        for (int j = 0;j < m;j++){
            if ((i == 0 || j == 0 || i == mat.size() - 1 || j == mat[0].size() - 1) && mat[i][j] == 'O') dfs(mat, i, j);
        }
    }
    for (int i = 0;i < mat.size();i++){
        for (int j = 0;j < mat[0].size();j++){
            if (mat[i][j] == '*') mat[i][j] = 'O';
            else mat[i][j] = 'X';
        }
    }
    return mat;
}
int main(){



    return 0;
}
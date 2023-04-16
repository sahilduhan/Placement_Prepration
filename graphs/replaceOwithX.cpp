
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void dfs(vector<vector<char>>& mat, int n, int m, int i, int j){
        if (i < 0 || j < 0 || i >= n || j >= m || mat[i][j] != 'O') return;
        mat[i][j] = '*';
        dfs(mat, n, m, i + 1, j);
        dfs(mat, n, m, i, j + 1);
        dfs(mat, n, m, i - 1, j);
        dfs(mat, n, m, i, j - 1);

    }

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat){
        for (int i = 0;i < n;i++){
            for (int j = 0;j < m;j++){
                if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) && mat[i][j] == 'O') dfs(mat, n, m, i, j);
            }
        }
        for (int i = 0;i < n;i++){
            for (int j = 0;j < m;j++){
                if (mat[i][j] == '*') mat[i][j] = 'O';
                else mat[i][j] = 'X';
            }
        }
        return mat;
    }
};


int main(){


    return 0;
}
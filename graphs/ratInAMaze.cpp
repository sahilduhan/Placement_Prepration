#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void dfs(int i, int j, int n, vector<vector<int>>& m, vector<string>& ans, string s, vector<vector<bool>>& vis){
        if (i < 0 || i >= n || j < 0 || j >= n || m[i][j] == 0 || vis[i][j] == 1) return;
        if (i == n - 1 && j == n - 1){
            ans.push_back(s);
            return;
        }
        vis[i][j] = 1;
        dfs(i - 1, j, n, m, ans, s + "U", vis);
        dfs(i + 1, j, n, m, ans, s + "D", vis);
        dfs(i, j - 1, n, m, ans, s + "L", vis);
        dfs(i, j + 1, n, m, ans, s + "R", vis);
        vis[i][j] = 0;
    }
    vector<string> findPath(vector<vector<int>>& m, int n) {
        vector<string> ans;
        vector<vector<bool>> vis(n, vector<bool>(n, 0));
        dfs(0, 0, n, m, ans, "", vis);
        return ans;
    }
};
int main(){

    return 0;
}
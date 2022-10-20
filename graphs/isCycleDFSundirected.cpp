#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool dfs(vector<int>adj [], int parent, int i, vector<bool>visited){
        visited[i] = true;
        for (auto x : adj[i]){
            if (dfs(adj, i, x, visited)) return true;
            else if (x != parent) return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj []) {
        vector<bool>visited(V, false);
        for (int i = 0;i < V;i++){
            if (!visited[i]){
                if (dfs(adj, -1, i, visited)) return true;
            }
        }
        return false;
    }
};
int main(){

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int>BFStraversal(int n, vector<int>adjList []){
    vector<bool>visited(n + 1, false);
    vector<int>ans;

    queue<int>q;
    q.push(0);
    visited[0] = true;

    while (!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto it : adjList[node]){
            if (!visited[it]){
                visited[it] = true;
                q.push(it);
            }
        }
    }
    return ans;
}

int main(){


    return 0;
}
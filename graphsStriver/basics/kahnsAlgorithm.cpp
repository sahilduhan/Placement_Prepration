#include<bits/stdc++.h>
using namespace std;
vector<int>topoSort(int n, vector<int>adj []){
    queue<int>q;
    vector<int>ans, indegree(n, 0);

    for (int i = 0;i < n;i++){
        for (auto it : adj[i]) indegree[it]++;
    }

    for (auto it : indegree){
        if (it == 0) q.push(it);
    }

    while (!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for (auto it : adj[node]){
            indegree[it]--;
            if (indegree[it] == 0) q.push(it);
        }
    }
    return ans;
}
int main(){



    return 0;
}
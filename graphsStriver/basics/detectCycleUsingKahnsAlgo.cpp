#include<bits/stdc++.h>
using namespace std;
int topoSort(int n, vector<int>adj []){
    queue<int>q;
    vector<int>indegree(n, 0), ans;

    for (int i = 0;i < n;i++){
        for (auto it : adj[i]) indegree[it]++;
    }

    for (int i = 0;i < n;i++){
        if (indegree[i] == 0) q.push(i);
    }

    while (!q.empty()){
        int top = q.front();
        q.pop();
        ans.push_back(top);
        for (auto it : adj[top]){
            indegree[it]--;

            if (indegree[it] == 0) q.push(it);
        }
    }
    return ans.size();
}

// if the ans becomes equal to the size of the adjacency 
// list then the graph is not cyclic else it is cyclic
int main(){



    return 0;
}
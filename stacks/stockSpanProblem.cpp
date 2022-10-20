#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {100, 80, 60, 70, 60, 75, 85};
    int n = arr.size();
    vector<int>ans(n);
    stack<pair<int, int>>st;
    for (int i = 0;i < n;i++){
        while (!st.empty() and st.top().first <= arr[i]) st.pop();
        if (st.empty()) ans.push_back(-1);
        ans.push_back(st.top().second);

        st.push({arr[i], i});
    }
    for (auto it : ans) cout << it << " ";

    return 0;
}
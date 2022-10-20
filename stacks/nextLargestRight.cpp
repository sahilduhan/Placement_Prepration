#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {1, 2, 32, 23, 12, 1, 3};
    stack<int>st;
    vector<int>ans(arr.size(), -1);

    for (int i = arr.size() - 1;i >= 0;i--){
        while (!st.empty() and st.top() < arr[i]) st.pop();
        if (st.empty()) ans.push_back(-1);
        else ans[i] = st.top();

        st.push(arr[i]);
    }
    // reverse(ans.begin(), ans.end());
    for (auto it : ans) cout << it << " ";

    return 0;
}
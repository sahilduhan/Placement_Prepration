#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1, 2, 3, 4};
    int n = arr.size();
    stack<int>st;
    vector<int>ans(n, -1);
    st.push(-1);
    for (int i = 0;i < n;i++){
        while (st.top() >= arr[i]) st.pop();
        ans[i] = st.top();
        st.push(arr[i]);
    }
    for (auto it : ans) cout << it << " ";

    return 0;
}
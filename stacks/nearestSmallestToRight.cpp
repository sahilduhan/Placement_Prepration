#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = arr.size();
    vector<int>ans(n, -1);
    stack<int>st;
    for (int i = n - 1;i >= 0;i--){
        while (!st.empty() and st.top() >= arr[i]) st.pop();
        if (st.size() == 0) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }
    for (auto it : ans) cout << it << " ";
    return 0;
}
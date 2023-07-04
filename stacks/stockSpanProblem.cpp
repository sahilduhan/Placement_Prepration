#include<bits/stdc++.h>
using namespace std;
vector <int> calculateSpan(int arr [], int n){
    stack<int>st;
    vector<int>ans(n, 1);
    for (int i = 0;i < n;i++){
        while (!st.empty() and arr[i] >= arr[st.top()]) st.pop();
        if (!st.empty()) ans[i] = i - st.top();
        else ans[i] = i + 1;
        st.push(i);
    }
    return ans;
}
int main(){



    return 0;
}
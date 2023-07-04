#include<bits/stdc++.h>
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n){
    vector<long long> ans;
    stack<long long>st;
    for (int i = n - 1;i >= 0;i--){
        while (!st.empty() and arr[i] >= st.top()) st.pop();
        if (st.empty()) ans.push_back(-1);
        else ans.push_back(st.top());
        st.push(arr[i]);
    }
    return ans;
}
int main(){

    return 0;
}
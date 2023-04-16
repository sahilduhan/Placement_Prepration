#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr = {1, 3, 2, 4};
    vector<int>ans;
    stack<int>st;

    for (int i = arr.size() - 1;i >= 0;i--){
        if (st.empty()) ans.push_back(-1);
        else if (st.size() > 0 and st.top() > arr[i]) ans.push_back(st.top());
        else if (st.size() > 0 and st.top() <= arr[i]) {
            while (st.size() > 0 and st.top() <= arr[i]){
                st.pop();
            }
            if (st.empty()) ans.push_back(-1);
            else ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(arr.begin(), arr.end());
    return 0;
}
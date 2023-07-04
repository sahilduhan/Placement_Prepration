#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        st.push(num[0]);
        int n = num.size();
        for (int i = 1;i < n;i++){
            while (k-- and !st.empty() and st.top() > num[i]){
                st.pop();
            }
            st.push(num[i]);
            if (st.size() == 1 and st.top() == '0') st.pop();
        }
        while (!st.empty() and k--) st.pop();

        string ans = "";
        while (!st.empty())ans += st.top(), st.pop();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main(){



    return 0;
}
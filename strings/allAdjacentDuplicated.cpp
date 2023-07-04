#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s, int k) {

        stack<pair<char, int>> st;
        int i = 0;
        while (i < s.size()){
            if (st.empty()) st.push({s[i], 1});
            else{
                if (st.top().first != s[i]) st.push({s[i], 1});
                else {
                    st.top().second++;
                    if (st.top().second == k) st.pop();
                }
            }
            i++;
        }
        string ans = "";
        while (!st.empty()){
            int t = st.top().second;
            while (t--) ans += st.top().first;
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main(){



    return 0;
}
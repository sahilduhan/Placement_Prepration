#include<bits/stdc++.h>
using namespace std;

// s = "i.like.this.program.very.much"

string reverseWords(string s){
    string ans = "", helper = "";
    s.push_back('.');
    stack<string>st;
    for (int i = 0;i < s.size();i++){
        if (s[i] == '.'){
            st.push(helper);
            helper = "";w
        }
        else helper += s[i];
    }
    while (!st.empty()){
        ans += st.top();
        ans.push_back('.');
        st.pop();
    }
    ans.pop_back();
    return ans;
}


int main(){

    string temp = "i.like.this.program.very.much";
    string ans = reverseWords(temp);
    cout << ans << endl;

    return 0;
}
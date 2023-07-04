#include<bits/stdc++.h>
using namespace std;
int solve(string str){
    stack<int> st;
    for (auto it : str){
        if (it == '+' || it == '-' || it == '*' || it == '/'){
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            if (it == '+') st.push(b + a);
            else if (it == '-') st.push(b - a);
            else if (it == '*') st.push(b * a);
            else st.push(b / a);
        }
        else st.push(it - '0');
    }
    return st.top();
}
int main(){



    return 0;
}
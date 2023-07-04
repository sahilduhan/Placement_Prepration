#include<bits/stdc++.h>
using namespace std;
bool check(string str){
    stack<char>st;
    for (auto it : str){
        if (it == '(' || it == '[' || it == '{'){
            st.push(it);
        }
        else if (it == '}'){
            if (!st.empty() and st.top() == '{') st.pop();
            else return false;
        }
        else if (it == ']'){
            if (!st.empty() and st.top() == '[') st.pop();
            else return false;
        }
        else if (it == ')'){
            if (!st.empty() and st.top() == '(') st.pop();
            else return false;
        }
    }
    if (st.empty()) return true;
    return false;
}
int main(){


    return 0;
}
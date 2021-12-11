#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "*((a+b))*";
    stack<char> s;
    bool ans = false;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '*' || str[i] == '+' || str[i] == '-' || str[i] == '/') s.push(str[i]);
        else if (str[i] == '(') s.push(str[i]);
        else if (str[i] == ')'){
            if (str[i] == '(') ans = true;
            while (s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/'){
                s.pop();
            }
            s.pop();
        }
    }
    cout << ans << endl;


    return 0;
}
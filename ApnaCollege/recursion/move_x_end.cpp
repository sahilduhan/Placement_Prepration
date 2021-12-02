#include <bits/stdc++.h>
using namespace std;
string move_x_end(string str)
{
    if (str.length() == 0)
        return "";
    char ch = str[0];
    string ans = move_x_end(str.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{

    return 0;
}
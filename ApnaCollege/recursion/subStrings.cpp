#include <bits/stdc++.h>
using namespace std;
void substring(string str, string ans = "")
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    string res = str.substr(1);
    substring(res, ans);
    substring(res, ans + ch);
}
int main()
{
    string str = "abc", ans = "";
    substring(str, ans);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
string removeDuplicate(string str)
{
    if (str.length() == 0)
        return "";
    char ch = str[0];
    string ans = removeDuplicate(str.substr(1));
    if (ch == ans[0])
        return ans;
    return (ch + ans);
}
int main()
{
    string str = "aaabbbbcccdeeeeee";
    cout << removeDuplicate(str);

    return 0;
}
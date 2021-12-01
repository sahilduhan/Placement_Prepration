#include <bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    if (str.length() == 0)
        return;

    string res = str.substr(1);
    reverse(res);
    cout << res[0] << " ";
}
int main()
{
    string str = "sahil";
    // reverse(str);
    reverse(str.begin(), str.end());
    cout << str;
    cout << endl;
    return 0;
}
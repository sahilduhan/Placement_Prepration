#include <bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    if (str.length() == 0)
        return;
    string resStr = str.substr(1);
    reverse(resStr);
    cout << str[0] << " ";
}
int main()
{
    string str = "sahil";
    reverse(str);
    return 0;
}
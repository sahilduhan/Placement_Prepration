#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int atoi(string str)
    {
        bool isNegative = (str[0] == '-');
        int ans = 0;
        for (int i = isNegative; i < str.size(); i++){
            if ((str[i] - '0') >= 0 and (str[i] - '0') <= 9) ans = ans * 10 + (str[i] - '0');
            else return -1;
        }
        return isNegative ? -ans : ans;
    }
};
int main(){

    string s = "";
    // int ans = solve(s);
    return 0;
}
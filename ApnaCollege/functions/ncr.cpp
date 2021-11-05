#include <bits/stdc++.h>
using namespace std;
void fact(int num)
{
    int val = 1;
    for (int i = 2; i < num; i++)
    {
        val *= i;
    }
}
int main()
{
    int n = 5, r = 3;
    // int ans = fact(n) / (fact(r) * fact(n - r));
    // cout << ans;

    return 0;
}
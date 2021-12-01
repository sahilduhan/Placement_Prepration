#include <bits/stdc++.h>
using namespace std;
int _sum(int n)
{
    if (n == 0) return 0;
    int prev = _sum(n - 1);
    return n + prev;
}
int main()
{
    int num = 20;
    cout << _sum(num) << endl;

    return 0;
}
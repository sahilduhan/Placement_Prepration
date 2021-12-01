#include <bits/stdc++.h>
using namespace std;
int power(int n, int p)
{
    if (p == 0)
        return 1;
    int prev = power(n, p - 1);
    return n * prev;
}
int main()
{
    int a = 2, p = 3;
    cout << power(a, p);

    return 0;
}
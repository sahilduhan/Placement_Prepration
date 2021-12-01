#include <bits/stdc++.h>
using namespace std;
int gsc(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{
    int a = 10, b = 100;
    cout << gsc(a, b) << endl;

    return 0;
}
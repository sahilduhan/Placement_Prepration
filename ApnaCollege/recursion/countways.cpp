#include <bits/stdc++.h>
using namespace std;
int countways(int s, int e)
{
    if (s == e) return 1;
    if (s > e) return 0;
    int count = 0;
    for (int i = 0; i < 6; i++) count += countways(s + i, e);
    return count;
}
int main()
{

    return 0;
}
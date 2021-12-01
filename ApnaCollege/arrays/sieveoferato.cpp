#include <bits/stdc++.h>
using namespace std;
void primseive(int n)
{
    int arr[100] = {0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += 1)
            {
                arr[i] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int n = 50, m = 10;
    primseive(n);
    return 0;
}
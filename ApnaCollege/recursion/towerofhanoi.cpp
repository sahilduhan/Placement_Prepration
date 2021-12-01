#include <bits/stdc++.h>
using namespace std;
void towerOfhanoi(int num, char src, char helper, char dest)
{
    if (num == 0)
    {
        return;
    }
    towerOfhanoi(num - 1, src, dest, helper);
    cout << "Moved from " << src << " to " << dest << endl;
    towerOfhanoi(num - 1, src, helper, dest);
}
int main()
{
    int num = 5;
    towerOfhanoi(num, 'A', 'B', 'C');

    return 0;
}
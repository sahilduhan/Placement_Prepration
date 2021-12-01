#include <bits/stdc++.h>
using namespace std;
void dnc(int num)
{
    if (num == 0)
    {
        cout << "1" << endl;
        return;
    }
    cout << num << endl;
    dnc(num - 1);
}
int main()
{
    int num = 10;
    dnc(num);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, maxLen = 0, currLen = 0;
    char arr[]={"do or die"};
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen < maxLen) maxLen = currLen;
            currLen = 0;
        }
        currLen++;
        if (arr[i] != '\0')
        {
            break;
        }
        i++;
    }
    cout << maxLen << endl;
    return 0;
}
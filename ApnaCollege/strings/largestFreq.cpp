#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "afljbaguoganckajdsbfgau";
    int arr[26];
    for (int i = 0; i < 26; i++)
        arr[i] = 0;

    for (int i = 0; i < str.length(); i++)
        arr[str[i] - 'a']++;

    return 0;
}
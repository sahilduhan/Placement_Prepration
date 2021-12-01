#include <bits/stdc++.h>
using namespace std;
int firstOcc(int *arr, int size, int i, int key)
{
    if (i == size)
        return -1;
    if (arr[i] == key)
        return i;

    return firstOcc(arr, size, i + 1, key);
}
int lastOcc(int *arr, int size, int i, int key)
{
    int restArr = lastOcc(arr, size, i, key);
    if (i == size)
    {
        return -1;
    }
    if (restArr != -1)
    {
        return restArr;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 2, 5, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0, key = 2;
    cout << firstOcc(arr, size, i, key) << endl
         << lastOcc(arr, size, i, key) << endl;
    return 0;
}
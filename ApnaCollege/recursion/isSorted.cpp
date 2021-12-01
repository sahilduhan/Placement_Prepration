#include <bits/stdc++.h>
using namespace std;
bool isSorted(int *arr, int size)
{
    if (size == 1)
        return true;
    bool restArr = isSorted(arr + 1, size - 1);
    return (arr[0] < arr[1] && restArr);
}
int main()
{
    int arr[] = {1, 23, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << isSorted(arr, size);
    return 0;
}
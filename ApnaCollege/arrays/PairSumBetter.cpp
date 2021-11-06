#include <bits/stdc++.h>
using namespace std;
bool PairSum(vector<int> arr, int key)
{
    int st = 0, end = arr.size()-1;
    while (st < end)
    {
        if(arr[st]+arr[end] == key) return true;
        else if(arr[st]+arr[end] > key) end--;
        else st++;
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key=11;
    cout<<PairSum(arr, key);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>arr, int m, int n){
    int i = m, j = n;
    while (i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
// void rotateArr(vector<int>& arr, int k){
//     reverse(arr, 0, k - 1);
//     reverse(arr, k, arr.size() - 1);
//     reverse(arr, 0, arr.size() - 1);
// }
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};

    int k = 3;
    // rotateArr(arr, 1);
    // reverse(arr, 0, k - 1);
    // reverse(arr, k, arr.size() - 1);
    reverse(arr, 0, arr.size() - 1);
    for (auto it : arr) cout << it << " ";
    return 0;
}
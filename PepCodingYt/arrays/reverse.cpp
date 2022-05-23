#include<bits/stdc++.h>
using namespace std;
// void reverse(vector<int>& arr){
//     for (int i = 0;i < arr.size() / 2;i++){
//         swap(arr[i], arr[arr.size() - i - 1]);
//     }
// }
void reverse(vector<int>& arr, int m, int n){
    int i = m, j = n;
    while (i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    reverse(arr, 0, arr.size() - 1);
    for (auto it : arr) cout << it << " ";
    return 0;
}
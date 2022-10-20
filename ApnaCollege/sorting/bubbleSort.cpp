#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {5, 4, 2, 11, 31};
    int counter = 1;

    while (counter < arr.size()){
        for (int i = 0;i < arr.size() - counter;i++){
            if (arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
        }
        counter++;
    }

    for (auto it : arr) cout << it << " ";
    return 0;
}
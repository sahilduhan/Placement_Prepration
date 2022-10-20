#include<bits/stdc++.h>
using namespace std;
static int minMovesToEvenFollowedByOdd(vector<int>& arr) {
    int moves = 0;
    int totalLength = arr.size();
    for (int i = 0; i <= totalLength / 2; i++) {
        if (arr[i] % 2 != 0) {
            for (int j = totalLength / 2; j < totalLength; j++) {
                if (arr[j] % 2 == 0) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    moves++;
                    break;
                }
                else {
                    continue;
                }
            }
        }
        else {
            continue;
        }
    }
    return moves;
}
int main()
{
    vector<int>arr = {2, 3, 1, 4};
    cout << minMovesToEvenFollowedByOdd(arr);

    return 0;
}
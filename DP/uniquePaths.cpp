#include<bits/stdc++.h>
using namespace std;
int solve(int row, int col, int i, int j){
    if (i < 0 || j < 0 || i >= row || j >= col) {
        return 0;
    }
    if (i == row - 1 and j == col - 1) return 1;
    int right = solve(row, col, i, j + 1);
    int down = solve(row, col, i + 1, j);

    return right + down;
}
int main(){



    return 0;
}
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    for (int i = 2; i < sqrt(num); i++){
        if (num % i == 0) return false;
    }
    return true;
}
int main()
{
    int start = 1, end = 100;
    for (int i = start; i <= end; i++){
        if (isPrime(i)) cout << i << endl;
    }
    return 0;
}
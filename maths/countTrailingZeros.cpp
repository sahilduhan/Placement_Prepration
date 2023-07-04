#include<bits/stdc++.h>
using namespace std;
int countZeros(int num){
    int ans = 0;
    for (int i = 4;num / i > 0;i += 5) ans += num / i;
    return ans;
}

int main(){



    return 0;
}
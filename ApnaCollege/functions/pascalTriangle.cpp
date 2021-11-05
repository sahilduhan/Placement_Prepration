#include <bits/stdc++.h>
using namespace std;
int fact(int num){
    if(num<=1) return 1;
    return num*fact(num-1);
}
int main()
{
    int num=5;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
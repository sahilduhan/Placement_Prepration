#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=153, sum=0, original=num;
    while(num>0){
        int last=num%10;
        sum+=pow(last,3);
        num=num/10;
    }
    if(sum==original) cout<<"yes";
    else cout<<"No";
    return 0;
}
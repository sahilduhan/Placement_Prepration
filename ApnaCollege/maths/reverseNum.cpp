#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=124, reverse;
    while(num>0){
        int last=num%10;
        reverse= reverse*10+last;
        num=num/10;
    }
    cout<<reverse<<endl;
    return 0;
}
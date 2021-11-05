#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    bool flag=1;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
        flag=0;
        break;
        } 
    }
    if(flag==1) cout<<"Non prime"<<endl;
    else cout<<"Prime"<<endl;
    return 0;
}
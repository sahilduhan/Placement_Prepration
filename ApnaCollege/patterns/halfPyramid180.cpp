#include<bits/stdc++.h>
using namespace std;
int main(){
    int r=5;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(j<=r-i) cout<<" ";
            else cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
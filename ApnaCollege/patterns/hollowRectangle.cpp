#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r=5, c=5;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0|| i==r || j==0|| j==c) cout<<" * ";
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
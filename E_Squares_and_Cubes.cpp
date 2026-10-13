#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio();
    cin.tie(NULL);
    int t;
    cin>>t;
    int v[t];
    for(int i=0;i<t;i++){
          cin>>v[i];
    }
    for(int i=0;i<t;i++){
        int y=v[i];
        int x=0;
        x+=sqrt(y);
        x+=cbrt(y);
        long long z = pow(y, 1.0/6.0);
        while((z+1)*(z+1)*(z+1)*(z+1)*(z+1)*(z+1) <= y) z++;
        while(z*z*z*z*z*z > y) z--;
        x-=z;
        cout<<x<<"\n";
    }
return 0;
}
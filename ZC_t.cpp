#include<bits/stdc++.h>
using namespace  std;
int main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
    int x=111111111,n;
     cin>>n;
     while(n>=0){
        if(n==0){cout<<"YES\n";
                 break;}
        else if(x<11){cout<<"NO\n";
                      break;}
         n%=x;
         x/=10;
     }
     }
return 0;
}
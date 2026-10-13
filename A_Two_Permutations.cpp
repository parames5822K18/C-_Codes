#include<bits/stdc++.h>
using namespace  std;
int main(){
      ios::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin>>t;
      while(t--){
          int n,a,b;
          cin>>n>>a>>b;
          if(a+b>n){
            if(a==b && b==n)cout<<"Yes\n";
            else cout<<"No\n";}
          else if(a+b<n){
            if(n-a-b>1)cout<<"Yes\n";
            else cout<<"No\n";
          }
          else{
            cout<<"No\n";
          }
      }
return 0;
}
#include<bits/stdc++.h>
using namespace  std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     long long t,i,j;
     cin>>t;
     for(i=0;i<t;i++){
        long long n;
        cin>>n;
        if(n>0){
            for(long long temp=2;temp<n;temp*=2){
                if(temp<n)continue;
                else if(temp==n){
                    cout<<"YES\n";
                    break;
                }
                else{
                    cout<<"NO\n";
                }
            }
        }
        else cout<<"NO\n";
     }
return 0;
}
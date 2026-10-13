#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long out=0;
        long long ans=0;
        for(long long i=1;i<=n;i++){
            if(n%i==0)out++;
            else{
                break;
            }
        }
        ans=(ans>out)?ans:out;
        cout<<ans<<'\n';
    }
return 0;
}
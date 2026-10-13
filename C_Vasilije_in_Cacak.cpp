#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long min=(k*(k+1))/2;
        long long max=(k*(2*n-k+1))/2;
        if(x>=min && x<=max)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
return 0;
}
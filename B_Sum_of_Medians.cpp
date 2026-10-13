#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORll(i,a,b) for(long long i=a;i<b;i++)
#define tc long long t; cin>>t; while(t--)
#define pb push_back
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
int main(){
	fast
    tc{
        ll n,k;
        cin>>n>>k;
        vll vec(n*k);
        FOR(i,0,n*k)cin>>vec[i];
        vll v;
        ll front=-1;
        ll back=n*k;
        for(ll i=0;i<k;i++){
            for(ll j=n-1;j>=0;j--){
                if(j>=((n-1)/2))v.pb(vec[--back]);
                else v.pb(vec[++front]);
            }
        }
        reverse(all(v));
        ll sum=0;
        for(ll i=((n-1)/2);i<n*k;i+=n){
            sum+=v[i];
        }
        cout<<sum<<'\n';
    }
return 0;
}
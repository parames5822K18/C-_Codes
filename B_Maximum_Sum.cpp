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
        vll vec(n);
        FORll(i,0,n)cin>>vec[i];
        sort(all(vec));
        vll presum(n+1,0);
        vll suffsum(n+1,0);
        for(ll i=1;i<=n;i++){
            presum[i]=presum[i-1]+vec[i-1];
        }
        for(ll i=n-1;i>=0;i--){
            suffsum[i]=suffsum[i+1]+vec[i];
        }
        ll out=LLONG_MAX;
        for(ll i=0;i<=k;i++){
            ll j=(k-i)*2;
            ll temp=presum[j]+suffsum[n-i];
            out=min(out,temp);
        }
        cout<<suffsum[0]-out<<'\n';
    }
return 0;
}
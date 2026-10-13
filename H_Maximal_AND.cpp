/*
   ███████████████████████████████████████████████
   ██                                           ██
   ██                Rx_PARAM                   ██
   ██                                           ██
   ███████████████████████████████████████████████
 */
#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORll(i,a,b) for(long long i=a;i<b;i++)
#define FOR1(i,a,b) for(int i=a;i>=b;i--)
#define FORLL1(i,a,b) for(long long i=a;i>=b;i--)
#define pb push_back
#define revsort(a) sort(all(a),greater <int> ());
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl '\n'
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
void solve(){
    ll n,k;
    cin>>n>>k;
    vll a(n);
    FORll(i,0,n)cin>>a[i];
    vector <vll> freq(31LL);
    FORll(i,0,31LL){
        FORll(j,0,n){
            ll t2=a[j]>>i;
            if((t2&1 )!=1){
                freq[i].pb(j);
            }
        }
    }
    /*FORll(i,0,31){
        for(auto x:freq[i]){
            cout<<x<<' ';
        }
        cout<<nl;
    }*/
    FORLL1(i,30,0){
        if(k==0)break;
        if(k<freq[i].size())continue;
        ll t1=1LL<<i;
        for(auto x:freq[i]){
            if(k==0)break;
            a[x]=a[x]|t1;
            k--;
        }
    }

    ll ans=a[0];
    for(auto x:a){
        ans=(ans&x);
    }
    cout<<ans<<nl;
}
int main(){
	fast
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
return 0;
}
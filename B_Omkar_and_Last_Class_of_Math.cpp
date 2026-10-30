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
#define nl '\n'
#define  YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ANS cout<<"ANS\n";
#define revsort(a) sort(all(a),greater <int> ());
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
ll LCM(ll a,ll b){
    ll g=__gcd(a,b);
    ll ans=a*b;
    return ans/g;
}
void solve(){
    ll n;
    cin>>n;
    vll divisiors;
    divisiors.pb(1LL);
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ll k=n/i;
            cout<<k<<' '<<n-k<<nl;
            return;
        }
    }
    cout<<1<<' '<<n-1<<nl;
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
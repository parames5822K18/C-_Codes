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
#define revsort(a) sort(all(a),greater <int> ());
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;

ll min_pow(vll a,ll n){
    ll ans=a[0]+1;
    FORll(i,1,n){
        ans=max(ans,a[i]-i+1);
    }
    return ans;
}
void solve(){
    ll n;
    cin>>n;
    vector <pll> caves(n);//no.of monsters and min_armor
    FORll(i,0,n){
        ll n1;
        cin>>n1;
        vll a(n1);
        
        FORll(j,0,n1)cin>>a[j];
        caves[i].first=min_pow(a,n1);
        caves[i].second=n1;
        //cout<<caves[i].first<<' '<<caves[i].second<<nl;
    }
    sort(all(caves));
    ll killed=caves[0].second;
    //for(auto x:caves){
    //    cout<<x.first<<' '<<x.second<<nl;
    //}
    ll ans=caves[0].first;
    FORll(i,1,n){
        ans=max(ans,caves[i].first-killed);
        killed+=caves[i].second;
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
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
#define tc long long t; cin>>t; while(t--)
#define pb push_back
#define revsort(a) sort(all(a),greater <int> ());
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ANS cout<<ans<<'\n';
#define nl cout<<'\n';
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
using vb=vector <bool>;
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    vll a(n);
    ll ans=1;
    FORll(i,0,n)cin>>a[i];
    sort(all(a));
    //FORll(i,0,n)cout<<a[i]<<' ';
    vll gaps;
    FORll(i,1,n){
        ll temp=a[i]-a[i-1];
        if(temp<=x)continue;
        else{
            gaps.pb(temp);
        }
    }
    sort(all(gaps));
    for(auto x1:gaps){
        ll temp=(x1-1)/x;
        if(temp<=k){
            ans--;
            k-=temp;
        }
        else break;
    }
    ans+=gaps.size();
    ANS
    return;
}
int main(){
    	solve();
return 0;
}
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
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
ll lcm(ll x,ll y){
    ll xy=__gcd(x,y);
    ll ans=x;
    ans/=xy;
    ans*=y;
    return ans;
}
ll sum1(ll start,ll end){
    return ((start+end)*(end-start+1)/2);
}
void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll l=lcm(x,y);
    ll nx=0;
    ll ny=0;
    nx=(n/x)-(n/l);
    ny=(n/y)-(n/l);
    ll ans1=sum1(n-nx+1,n);
    ll ans2=sum1(1,ny);
    cout<<ans1-ans2<<'\n';
    return;
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
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

void solve(){
    int n;
    cin>>n;
    vi a(n);
    FOR(i,0,n)cin>>a[i];
    map <int,int> freq;
    FOR(i,0,n){
        freq[a[i]]++;
    }
    ll ans=0;
    for(auto x:freq){
        ans+=max(0,freq[x.first]-freq[x.first-1]);
    }
    cout<<ans<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
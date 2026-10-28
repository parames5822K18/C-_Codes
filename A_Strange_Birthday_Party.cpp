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
using vb=vector<bool>;
void solve(){
    int n,m;
    cin>>n>>m;
    vi k(n),c(m);
    FOR(i,0,n)cin>>k[i];
    FOR(i,0,m)cin>>c[i];
    sort(all(k));
    reverse(all(k));
    int j=0;
    ll ans1=0;
    FOR(i,0,n){
        if(j<k[i] && c[j]<c[k[i]-1]){
            ans1+=c[j++];
        }
        else{
            ans1+=c[k[i]-1];
        }
    }
    cout<<ans1<<nl;
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
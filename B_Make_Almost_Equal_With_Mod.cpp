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
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
void solve(){
    ll n;
    cin>>n;
    vll a(n);
    //Think in way of binary
    FORll(i,0,n)cin>>a[i];
    FORll(i,1,61){
        ll mod=1LL<<i;
        set <ll> st;
        FORll(j,0,n){
            st.insert(a[j]%mod);
        }
        if(st.size()==2){
            cout<<mod<<'\n';
            return;
        }
    }
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
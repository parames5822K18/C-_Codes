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
    ll n,m;
    cin>>n>>m;
    vector <vll> a(n);
    FORll(i,0,n)a[i].resize(m);
    FORll(i,0,n){
        FORll(j,0,m){
            cin>>a[i][j];
            //cout<<a[i][j]<<' ';
        }
        //cout<<'\n';
    }
    vector <vll> b(m);
    FORll(i,0,m)b[i].resize(n);
    FORll(i,0,m){
        FORll(j,0,n){
            b[i][j]=a[j][i];
        }
        sort(all(b[i]));
    }
    ll ans=0;
    FORll(i,0,m){
        FORll(j,0,n){
            ans-=(b[i][j]*(n-j-1));
            ans+=(b[i][j]*j);
        }
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
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
    vector <vector <char>> a(n);
    FOR(i,0,n)a[i].resize(n);
    FOR(i,0,n){
        FOR(j,0,n)cin>>a[i][j];
    }
    ll ans=0;
    FOR(i,0,n){
        FOR(j,0,n){
            int c1=0;
            int c0=0;
            if(a[i][j]=='1')c1++;
            if(a[j][n-i-1]=='1')c1++;
            if(a[n-i-1][n-j-1]=='1')c1++;
            if(a[n-j-1][i]=='1')c1++;
            c0=4-c1;
            ans+=min(c1,c0);
        }
    }
    cout<<ans/4<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
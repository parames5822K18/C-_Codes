/*
   SPLR
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
    ll n,c;
    cin>>n>>c;
    vll a(n);
    FORll(i,0,n)cin>>a[i];
    vll b(n);
    FORll(i,0,n){
        b[i]=a[i]+i+1;
    }
    sort(all(b));
    ll T=0;
    ll sum=0;
    FORll(i,0,n){
        sum+=b[i];
        if(sum>c)break;
        else T++;
    }
    cout<<T<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
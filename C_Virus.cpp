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
    vll a(m);
    FORll(i,0,m)cin>>a[i];
    sort(all(a));
    ll ndays=0;
    ll nsaved=0;
    vll gaps;
    FORll(i,1,m){
        gaps.pb(a[i]-a[i-1]-1);
    }
    gaps.pb(a[0]+n-a[m-1]-1);
    sort(all(gaps));
    reverse(all(gaps));
    for(auto x:gaps){
        x-=(2*ndays);
        if(x<=0)break;
        if(x>2){
            ndays+=2;
            nsaved+=(x-1);
        }
        else {
            ndays+=1;
            nsaved+=1;
        }
    }
    cout<<n-nsaved<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
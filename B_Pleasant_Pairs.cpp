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
    ll n;
    cin>>n;
    vector <pll> a(n);
    FORll(i,0,n){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(all(a));
    ll ans=0;
    FORll(i,0,n){
        FORll(j,i+1,n){
            if((a[i].first*a[j].first)>2*n){
                break;
            }
            if((a[i].first*a[j].first)==(a[i].second+a[j].second)){
                ans++;
            }
        }
    }
    cout<<ans<<'\n';
    return;
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
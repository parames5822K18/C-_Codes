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
    ll n;
    cin>>n;
    vll a(n);
    FORll(i,0,n)cin>>a[i];
    ll ans=LLONG_MIN;
    ll i=0,j=0;
    ll sum=0;
    while(j<n){
        if(sum<0){
            sum=0;
            i=j;
        }
        if(i<j){
            if((a[j]^a[j-1])&1){
                sum+=a[j];
            }
            else{
                sum=a[j];
                i=j;
            }
        }
        else{
            sum=a[j];
        }
        ans=max(ans,sum);
        j++;
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
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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ANS cout<<ans<<'\n';
#define nl cout<<'\n';
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
using vb=vector <bool>;
void solve(){
    int n;
    cin>>n;
    vi a;
    int m=0;
    FOR(i,0,n){
        int temp;
        cin>>temp;
        if(a.empty() || a[m-1]!=temp){
            a.pb(temp);
            m++;
        }
    }
    //When three elements are in increasing order or decreasing order middle one is removed
    n=m;
    vb status(n,true);
    ll ans=0;
    FOR(i,1,n-1){
        int j=i-1;
        if(a[i]>=a[j] && a[i+1]>=a[i]){
            status[i]=false;
        }
        else if(a[i]<=a[j] && a[i+1]<=a[i]){
            status[i]=false;
        }
    }
    
    for(auto x:status){
        if(x)ans++;
    }
    ANS
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
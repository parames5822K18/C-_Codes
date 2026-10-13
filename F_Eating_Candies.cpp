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
    int n;
    cin>>n;
    vi w(n);
    FOR(i,0,n){
        cin>>w[i];
    }
    vi presum(n+1,0);
    vi suffsum(n+1,0);
    FOR(i,1,n+1){
        presum[i]=presum[i-1]+w[i-1];
    }
    FOR1(i,n-1,0){
        suffsum[i]=suffsum[i+1]+w[i];
    }
    int l1=0;
    int l2=0;
    int ans=l1+l2;
    while(l1+l2<=n){
        if(presum[l1]<suffsum[n-l2]){
            l1++;
        }
        else if(presum[l1]>suffsum[n-l2]){
            l2++;
        }
        else {
            ans=max(ans,(l1+l2));
            l1++;
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
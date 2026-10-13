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
    ll n,m;
    cin>>n>>m;
    vll a(n);
    FORll(i,0,n)cin>>a[i];
    vll freq(m,0);
    FORll(i,0,n){
        freq[a[i]%m]++;
    }
    ll left=1;
    ll right=m-1;
    ll ans=0;
    if(freq[0]>0)ans++;
    while(left<right){
        if(freq[left]!=0 ||freq[right]!=0){
        ans+=(1+max(0LL,(abs(freq[left]-freq[right])-1)));}
        left++;
        right--;
    }
    if(m%2==0 && freq[m/2]>0){
        ans++;
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
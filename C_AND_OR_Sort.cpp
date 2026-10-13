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
    string s;
    cin>>s;
    ll ones=0;
    ll zeros=0;
    FOR(i,0,n){
        if(s[i]=='0')zeros++;
        else ones++;
    }
    ll leftzeros=0;
    ll leftones=0;
    ll rightzeros=zeros;
    ll rightones=ones;
    ll ans=LLONG_MAX;
    if(s[0]=='1'){
        cout<<zeros<<'\n';
        return;
    }
    FOR(i,0,n){
        ans=min(ans,leftones+rightzeros);
        //if(s[i]=='0')ans++;
        if(s[i]=='0'){
            rightzeros--;
            //leftzeros++;
            }
        else{
            //rightones--;
            leftones++;
        }
    }
    ans=min(ans,leftones+rightzeros);
    cout<<ans<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
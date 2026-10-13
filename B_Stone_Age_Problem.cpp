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
    ll n,q;
    cin>>n>>q;
    vll a(n),last(n);
    ll sum=0,common=0,reset=0;
    FORll(i,0,n){
        cin>>a[i];
        sum+=a[i];
        last[i]=0;
    }
    FORll(i,0,q){
        ll t;
        cin>>t;
        if(t==1){
            ll x,y;
            cin>>x>>y;
            x--;
            ll old;
            if(last[x]<reset){
                old=common;
            }
            else old=a[x];
            sum+=(y-old);
            a[x]=y;
            last[x]=i+1;}
        else {
            ll x;
            cin>>x;
            sum=n*x;
            common=x;
            reset=i+1;  
        }
        cout<<sum;
        nl
    }
}
int main(){
	solve();
return 0;
}
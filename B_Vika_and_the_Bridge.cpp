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
    ll n,k;
    cin>>n>>k;
    vector <pll> a(n);
    FORll(i,0,n){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    vector <vll> indices(k);
    FORll(i,0,k){
        indices[i].pb(0);
    }
    FORll(i,0,n){
        indices[a[i].first-1].pb(a[i].second);
    }
    FORll(i,0,k){
        indices[i].pb(n+1);
    }
    ll ans=LLONG_MAX;
    FORll(i,0,k){
        ll min1=0;
        ll min2=0;
        ll nk=indices[i].size();
        FORll(j,1,nk){
            ll temp=indices[i][j]-indices[i][j-1];
            if(temp>min1){
                min2=min1;
                min1=temp;
            }
            else if(temp>min2){
                min2=temp;
            }
        }
        ll ans1;
        ll tempa=(min1+1)/2;
        tempa--;
        ans1=max(tempa,min2-1);
        ans=min(ans1,ans);
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
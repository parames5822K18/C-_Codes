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
    vll a(n);
    FORll(i,0,n)cin>>a[i];
    vll k(q);
    FORll(i,0,q)cin>>k[i];
    vll presum(n+1,0);
    map <ll,ll> mp;
    vll final_a;
    FORll(i,0,n){
        if(mp[a[i]]==0){
            ll j;
            for(j=i;j<n;j++){
                if(a[j]>a[i]){
                    break;}
            }
            mp[a[i]]=j;//1 base-indexed
            final_a.pb(a[i]);
            i=j-1;
        }
    }
    FORll(i,0,n){
    presum[i+1]=presum[i]+a[i];}
    sort(all(final_a));
    FORll(i,0,q){
        if(mp[k[i]]!=0)cout<<presum[mp[k[i]]]<<' ';
        else cout<<presum[mp[final_a[upper_bound(all(final_a),k[i])-final_a.begin()-1]]]<<' ';
    }
    nl
    /*
    }
    FORll(i,0,q){
        cout<<presum[mp[final_a[upper_bound(all(final_a),k[i])-final_a.begin()]]]<<' ';
    }*/
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
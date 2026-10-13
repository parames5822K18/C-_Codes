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
#define nl '\n'
#define pb push_back
#define revsort(a) sort(all(a),greater <int> ());
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
ll funlek(ll n,ll k){
    ll temp=(n*(n+1));
    temp/=2;
    return temp;
}
ll fungk(ll n,ll k){
    ll temp=(n-k)*(3*k-n-1);
    temp/=2;
    return funlek(k,k)+temp;
}
void solve(){
    ll k,x;
    cin>>k>>x;
    ll i=0;
    ll sum=0;
    ll j=1;
    ll left=1;
    ll right=2*k-1;
    while(left<right){
        ll mid=left+(right-left)/2;
        ll temp1;
        if(mid<=k){
            temp1=funlek(mid,k);
        }
        else{
            temp1=fungk(mid,k);
        }
        if(temp1<x){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    cout<<left<<nl;

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
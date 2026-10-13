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
#define FORll1(i,a,b) for(long long i=a;i>=b;i--)
#define tc long long t; cin>>t; while(t--)
#define pb push_back
#define revsort(a) sort(all(a),greater <int> ());
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;ē
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
ll max_area(ll y){
    ll mx=0;
    FORll(i,1,y+1){
        mx=max(mx,i*(y+1-i));
    }
    return mx;
}
void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    ll consecutive_ones_max=0;
    ll cnt=0;
    FORll(i,0,n){
        if(s[i]=='1'){
            cnt++;
            consecutive_ones_max=max(consecutive_ones_max,cnt);
        }
        else cnt=0;
    }
    ll left=0;
    ll right=0;
    FORll(i,0,n){
        if(s[i]=='1')left++;
        else break;
    }
    FORll1(i,n-1,0){
        if(s[i]=='1')right++;
        else break;
    }
    ll x=min((left+right),n);
    consecutive_ones_max=max(consecutive_ones_max,x);
    ll max_area1=max_area(consecutive_ones_max);
    if(consecutive_ones_max==n)max_area1=n*n;
    cout<<max_area1<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
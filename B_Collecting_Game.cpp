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
    vector <pair <ll,ll> > b(n);
    FORll(i,0,n){
        b[i].first=a[i];
        b[i].second=i;
    }
    sort(all(b));
    vll presum(n,0);
    FORll(i,1,n){
        presum[i]=presum[i-1]+b[i-1].first;
    }
    vll ans(n,0);
    vll temp(n,0);
    ll temp_index=0;
    long long temp_sum=b[0].first;
    FOR(i,1,n){
        if(b[i].first<=temp_sum){
            temp_sum+=b[i].first;
            temp_index++;
        }
        else{
            break;
        }
    }
    ans[0]=temp_index;
    FORll(i,1,n-1){
        temp_index=max(i,temp_index);
        temp_sum=max(temp_sum,presum[i+1]);
        FOR(j,temp_index+1,n){
            if(b[j].first<=temp_sum){
                temp_sum+=b[j].first;
                temp_index++;
            }
            else{
                break;
            }
        }
        ans[i]=temp_index;
    }
    ans[n-1]=n-1;
    vll out(n);
    FORll(i,0,n){
        out[b[i].second]=ans[i];
    }
    for(auto x:out)cout<<x<<' ';
    cout<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
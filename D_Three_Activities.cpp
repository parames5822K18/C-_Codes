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
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
vll max3(vll a){
    ll n=a.size();
    vector <pll> temp(n);
    FORll(i,0,n){
        temp[i].first=a[i];
        temp[i].second=i;
    }
    sort(all(temp));
    reverse(all(temp));
    vll ans(3);
    FORll(i,0,3){
        ans[i]=temp[i].second;
    }
    return ans;
}
void solve(){
    ll n;
    cin>>n;     
    vll  a(n);
    vll b(n);
    vll c(n);
    FORll(i,0,n)cin>>a[i];
    FORll(i,0,n)cin>>b[i];
    FORll(i,0,n)cin>>c[i];
    vll x=max3(a);
    vll y=max3(b);
    vll z=max3(c);
    ll ans=LLONG_MIN;
    FORll(i,0,3){
        FORll(j,0,3){
            FORll(k,0,3){
                ll temp1=x[i];
                ll temp2=y[j];
                ll temp3=z[k];
                if((temp1==temp2) || (temp2==temp3) ||(temp3==temp1))continue;
                ans=max(ans,(a[temp1]+b[temp2]+c[temp3]));
            }
        }
    }
    cout<<ans<<'\n';
    return;
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
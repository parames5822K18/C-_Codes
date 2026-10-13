#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORll(i,a,b) for(long long i=a;i<b;i++)
#define tc long long t; cin>>t; while(t--)
#define pb push_back
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
int main(){
	fast
    tc{
        ll n,m;
        cin>>n>>m;
        vll a(n);
        FOR(i,0,n)cin>>a[i];
        sort(all(a));
        map <ll,ll> out;
        map <ll,ll> freq;
        for(ll i=0;i<n;i++){
                freq[a[i]]++;    
        }
        ll ans=-1;
        for(ll i=0;i<n;i++){
            ll x=a[i];
            ll cnt1=n-i;
            cnt1+=freq[2*x];
            ans=max(cnt1,ans);
            if(a[i]%2==0){
                x=a[i]/2;
                ll pos=lower_bound(all(a),x)-a.begin();
                cnt1=n-pos;
                cnt1+=freq[2*x];
                ans=max(cnt1,ans);
            }
        }
        cout<<ans<<'\n';
    }
return 0;
}
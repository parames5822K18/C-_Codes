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
ll ans;
vll fun(vll a[],ll n){
        ll y;
        vll out;
        sort(all(a));
        map <ll,ll> freq;
        for(ll i=0;i<n;i++){
                freq[a[i]]++;    
        }
        ans=-1;
        for(ll i=0;i<n;i++){
            ll x=a[i];
            ll cnt1=n-i;
            cnt1+=freq[2*x];
            ans=max(cnt1,ans);
            if(ans==cnt1)y=a[i];
            if(a[i]%2==0){
                x=a[i]/2;
                ll pos=lower_bound(all(a),x)-a.begin();
                cnt1=n-pos;
                cnt1+=freq[2*x];
                ans=max(cnt1,ans);
                if(ans==cnt1)y=x;
            }}
        for(ll i=0;i<n;i++){
            if(a[i]>y){
                out.pb(y);
                out.pb(a[i]-y);
            }
            else out.pb(a[i]);
        }
    return out;
}
int main(){
	fast
    tc{
        ll n,m;
        cin>>n>>m;
        vll a(n);
        FORll(i,0,n)cin>>a[i];
        ll z=m;
        for(i=0;i<m;i+=2){
            vll a1;
            a1=fun(a,n);
            ll x1=ans;
            vll a2;
            a2=fun(a1,a1.size());
            ll x2=ans;
            cout<<x1<<' '<<x2<<' ';
            z-=2;
            if(x1==x2){
                for(ll i=0;i<z;i++)cout<<x1<<' ';
                break;
            }
        }
        cout<<'\n';
    }
return 0;
}
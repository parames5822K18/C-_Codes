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
int main(){
	fast
    tc{
    	ll n;
        cin>>n;
        vll a(n);
        FORll(i,0,n)cin>>a[i];
        //sort(all(a));
        long long out=0;
        vll sum(n,0);
        sum[0]=a[0];
        FORll(i,1,n){
            sum[i]=sum[i-1]+a[i];
        }
        for(ll k=1;k<=n;k++){
            if(n%k!=0)continue;
            ll s1=LLONG_MAX;
            ll s2=LLONG_MIN;
            for(ll s=0;s+k<=n;s+=k){
                ll temp=((s==0)?sum[k-1]:sum[s+k-1]-sum[s-1]);
                s1=min(s1,temp);
                s2=max(s2,temp);
            }
            out=max(out,s2-s1);
        }
        cout<<out<<'\n';
    }
return 0;
}
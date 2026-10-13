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
        ll n,k;
        cin>>n>>k;
        vll a(n),b(n);
        FORll(i,0,n)cin>>a[i];
        FORll(i,0,n)cin>>b[i];
        ll maxi=0;
        ll ans=0;
        ll sum=0;
        FORll(i,0,min(n,k)){
            sum+=a[i];
            maxi=max(maxi,b[i]);
            ans=max(ans,sum+(k-i-1)*maxi);
        }
        cout<<ans<<'\n';
    }
return 0;
}
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
ll combinations(ll a,ll b){
    return ((a-b+1)*(a-b+2))/2;
}
int main(){
	fast
    tc{
        ll n,k,q;
        cin>>n>>k>>q;
        vll a(n);
        vll out;
        FORll(i,0,n)cin>>a[i];
        FORll(i,0,n){
            if(a[i]>q)continue;
            else{
                ll j=i;
                ll c=0;
                for(j;j<n;j++){
                    if(a[j]>q)break;
                    else c++;
                }
                if(c>=k)out.pb(c);
                i=j-1;
            }
        }
        ll s=0;
        for(auto x:out)s+=combinations(x,k);
        cout<<s<<'\n';
    }
return 0;
}
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
        int n;
        cin>>n;
        vi a(n);
        vi b(n);
        FOR(i,0,n)cin>>a[i];
        FOR(i,0,n)cin>>b[i];
        sort(all(a));
        sort(all(b));
        bool fun=true;
        FOR(i,0,n)if(a[i]<=b[i])fun=false;
        ll ans=1;
        if(!fun)cout<<0<<'\n';
        else{
            vi c;
            int j=0;
            for(int i=0;i<n;i++){
                for(j;j<n;j++){
                    if(a[j]>b[i])break;
                }
                c.pb(n-j);
            }
            int x=n;
            ll ans=1;
            FOR(i,0,n)c[i]-=(--x);
            FOR(i,0,n)ans=((ans*c[i])%(1000000000+7));
            cout<<ans%(1000000000+7)<<'\n';
        }
        
    }
return 0;
}
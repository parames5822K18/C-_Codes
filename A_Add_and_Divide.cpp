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
ll fun(ll a,ll b,ll x){
    ll cnt=0;
    while(a){
        a/=x;
        cnt++;
    }
    return cnt+x-b;
}
int main(){
	fast
    tc{
        ll a,b;
        cin>>a>>b;
        if(a==1 && b!=1)cout<<fun(a,b,b)<<'\n';
        else if(a<b)cout<<1<<'\n';
        else if(a==b)cout<<2<<'\n';
        else if(b==1){
            ll out=LONG_LONG_MAX;

            FORll(c,2,32){
                ll x=fun(a,b,c);
                if(x>out)continue;
                else out=x;
            }
            cout<<out<<'\n';
        }
        else{
            ll out=LONG_LONG_MAX;

            FORll(c,b,b+30){
                ll x=fun(a,b,c);
                if(x>out)continue;
                else out=x;
            }
            cout<<out<<'\n';
        }
    }
return 0;
}
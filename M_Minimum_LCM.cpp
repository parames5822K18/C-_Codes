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
        ll n;
        cin>>n;
        ll a=1;
        ll b=n-1;
        ll lcm1=LLONG_MAX;
        ll out1=1;
        ll out2=n-1;
        bool ok=true;
        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                cout<<n/i<<' '<<n-(n/i)<<'\n';
                ok=false;
                break;
            }
        }
        if(ok)cout<<1<<' '<<n-1<<'\n';
    }
return 0;
}
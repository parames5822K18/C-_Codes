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
        vll b(m);
        FORll(i,0,n)cin>>a[i];
        FORll(i,0,m)cin>>b[i];
        ll sa=a[0]+n-1;
        ll sb=b[0]+m-1;
        ll i=0;
        ll j=0;
        ll com=min(sa,sb);
        sa-=(com-1);
        sb-=(com-1);
        while(sa && sb){
            sb--;
            if(sb==0){
                cout<<1<<'\n';
                break;
            }
            sa--;
            if(sa==0){
                cout<<2<<'\n';
                break;
            }
        }
        
    }
return 0;
}
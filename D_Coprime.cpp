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
ll HCF(ll a,ll b){
    if(a<b)return HCF(b,a);
    if(b==0)return a;
    else return HCF(b,a%b); 
}
ll solve(){
        ll n;
        cin>>n;
        vll a(n);
        vector <ll> pos(1000,-1);
        FORll(i,0,n){
            cin>>a[i];
            pos[a[i]-1]=i;
        }
        ll mx=-1;
        FORll(i,0,1000){
            if(pos[i]==-1)continue;
            FORll(j,i+1,1000){
                if(pos[j]==-1)continue;
                if(HCF(i+1,j+1)!=1)continue;
                mx=max(mx,pos[i]+pos[j]+2);
            }
        }
        if(pos[0]!=-1)mx=max(mx,2*(1+pos[0]));
        return mx;
}
int main(){
	fast
    tc{
    	cout<<solve()<<'\n';
    }
return 0;
}
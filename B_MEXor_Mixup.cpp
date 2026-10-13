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
ll getXOR(ll n){
    if(n%4==0)return n;
    if(n%4==3)return 0;
    if(n%4==2)return n+1;
    if(n%4==1)return 1;

}
int main(){
	fast
    tc{
        ll a,b;
        cin>>a>>b;
        vi vec;
        ll XOr=getXOR(a-1);
        if(XOr==b)cout<<a<<'\n';
        else if((b^XOr)!=a)cout<<a+1<<'\n';
        else cout<<a+2<<'\n';
    }
return 0;
}
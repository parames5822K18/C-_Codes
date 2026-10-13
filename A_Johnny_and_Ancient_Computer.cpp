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
ll fun2(ll a,ll b){
    if(a<b){
        a^=b;
        b^=a;
        a^=b;
    }
    ll cnt=0;
    while(a!=b){
        if(a%2==1)return -1;
        cnt++;
        a/=2;
    }
    return cnt;
}
int main(){
	fast
    tc{
        ll a,b;
        cin>>a>>b;
        ll out=fun2(a,b);
        ll out1=out/3;
        ll out2=(out%3)/2;
        ll out3=out-3*out1-2*out2;
        cout<<out1+out2+out3<<'\n';
    }
return 0;
}
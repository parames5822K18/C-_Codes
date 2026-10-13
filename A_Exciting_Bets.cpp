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
        ll a,b;
        cin>>a>>b;
        if(a==b)cout<<0<<' '<<0<<'\n';
        else if(a>b){
            ll d=(a-b);
            ll x=b/d;
            ll out1=((b-x*d)<((x+1)*d)-b)?(b-x*d):((x+1)*d-b);
            cout<<d<<' '<<out1<<'\n';
        }
        else{
            ll d=(b-a);
            ll x=a/d;
            ll out1=((a-x*d)<((x+1)*d)-a)?(a-x*d):((x+1)*d-a);
            cout<<d<<' '<<out1<<'\n';
        }
    }
return 0;
}
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
        ll x,y,k;
        cin>>x>>y>>k;
        ll sticks_req=k+k*y;
        ll  coal_req=k;
        ll z1=((sticks_req-1)/(x-1));
        if((sticks_req-1)%(x-1)!=0)z1++;
        cout<<z1+k<<'\n';
    }
return 0;
}
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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        if(s<b*k || s>(b*k+(k-1)*n)){
            cout<<-1<<'\n';
        }
        else{
            ll x=min(b*k+k-1,s);
            cout<<x<<' ';
            s-=x;
            for(ll i=1;i<n;i++){
                x=min(s,k-1);
                cout<<x<<' ';
                s-=x;
            }
            cout<<'\n';
        }
    }
return 0;
}
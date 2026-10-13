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
        vll p(n);
        p[0]=1;
        FORll(i,1,n-1)cin>>p[i];
        ll m;
        cin>>m;
        vll a(m);
        FORll(i,0,m){
            cin>>a[i];
            
        }

    }
return 0;
}
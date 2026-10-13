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
inline ll sqrtt(ll n){
    ll i=1;
    while(i<=n/i){
        i++;
    }
    i--;
    return i;
}
int main(){
	fast
    tc{
        cout<<sqrtt(9)<<endl;
    }
return 0;
}
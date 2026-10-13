#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define tc int t; cin>>t; while(t--)
#define pb push_back
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
int solve(vll vec,int max1,int n){
    if(n==max1)return 0;
    if(max1<=n && n<=max1*2)return 1+n-max1;
    else return 1+max1+solve(vec,max1*2,n);
}
int main(){
	fast
    tc{
        ll n;
        cin>>n;
        vll vec(n);
        FOR(i,0,n){
            cin>>vec[i];
        }
        map<ll,ll> mp;
        ll max1 = 0;
        for(ll x : vec){
            mp[x]++;
            max1 = max(max1, mp[x]);
        }
        cout<<solve(vec,max1,n)<<'\n';
    }
return 0;
}
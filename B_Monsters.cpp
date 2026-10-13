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
using pll=pair <ll,ll>;
bool fun(const pll &pl1,const pll &pl2){
    if(pl1.first!=pl2.first)return pl1.first>pl2.first;
    return pl1.second<pl2.second;
}
int main(){
	fast
    tc{
        ll n,k;
        cin>>n>>k;
        vector <pll> vec(n);
        FORll(i,0,n){
            ll x;
            cin>>x;
            vec[i]={((x%k==0)?k:x%k),i+1};
        }
        sort(all(vec),fun);
        FORll(i,0,n)cout<<vec[i].second<<' ';
        cout<<'\n';
    }
return 0;
}
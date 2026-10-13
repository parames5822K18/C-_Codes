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
        ll n,x;
        cin>>n>>x;
        vll vec(n);
        FORll(i,0,n)cin>>vec[i];
        vector <pair <ll,ll>> pl(n);
        FORll(i,0,n)pl[i]={(vec[i]-x),(vec[i]+x)};
        ll cnt=0;
        ll low=pl[0].first;
        ll high=pl[0].second;
        FORll(i,1,n){
            if(high<pl[i].first || low>pl[i].second){
                cnt++;
                low=pl[i].first;
                high=pl[i].second;
            }
            else{low=max(low,pl[i].first);
            high=min(high,pl[i].second);}
        }
        cout<<cnt<<'\n';
    }
return 0;
}
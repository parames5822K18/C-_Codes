#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORll(i,a,b) for(long long i=a;i<b;i++)
#define FOR1(i,a,b) for(int i=a;i>=b;i--)
#define FORLL1(i,a,b) for(long long i=a;i>=b;i--)
#define tc long long t; cin>>t; while(t--)
#define pb push_back
#define revsort(a) sort(all(a),greater <int> ());
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
void solve(){
    ll n,W;
    cin>>n>>W;
    vector <pair <ll,ll> > d(n);
    FORll(i,0,n){
        cin>>d[i].first;
        d[i].second=i+1;
    }
    sort(all(d));
    //reverse(all(d));
    vll temp;
    ll temp1=0;
    ll need=(W+1)/2;
    FORll(i,0,n){
        if(d[i].first>=need && d[i].first<=W){
            cout<<1<<'\n'<<d[i].second<<'\n';
            return;
        }
        
    }
        for(int i=0;i<n;i++){
            if((temp1+d[i].first)<need){
                temp.pb(d[i].second);
                temp1+=d[i].first;
            }
            else if(need<=(temp1+d[i].first) && (temp1+d[i].first)<=W){
                temp.pb(d[i].second);
                cout<<temp.size()<<'\n';
                for(auto x:temp)cout<<x<<' ';
                cout<<'\n';
                return;
            }
            else continue;
        }
    
    cout<<-1<<'\n';
    return;
}x
int main(){
	fast
    tc{
        solve();
    }
return 0;
}
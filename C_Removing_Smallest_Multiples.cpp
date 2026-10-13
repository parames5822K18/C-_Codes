/*
   ███████████████████████████████████████████████
   ██                                           ██
   ██                Rx_PARAM                   ██
   ██                                           ██
   ███████████████████████████████████████████████
 */
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
    int n;
    cin>>n;
    string T;
    cin>>T;
    ll ans=0;
    vector <bool> status(n+1,false);
    FOR(i,1,n+1){
        for(int j=i;j<=n;j+=i){
            if(T[j-1]=='1')break;
            if(status[j])continue;
            else{
                status[j]=true;
                ans+=i;
            }
        }
    }
    cout<<ans<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
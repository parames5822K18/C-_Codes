/*
   SPLR
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
    int n,x;
    cin>>n>>x;
    vi a(n);
    FOR(i,0,n)cin>>a[i];
    vi freq(3e5+1,0);
    FOR(i,0,n){
        freq[a[i]]++;
    }
    int ans(3e5+1,0);
    FOR(i,1,3e5+1){
        ans[i]=freq[i];
    }
    for(int i=2;i<=3e5;i++){
        for(int d=1;d*d<=i;d++){
            if(i%d==0){
                ans[i]=max(ans[i],freq[d]*ans[d]);
                if(i/d!=d){
                    ans[i]=max(ans[i],freq[i/d]*ans[i/d]);
                }
            }
        }
    }
    cout<<ans[x]<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
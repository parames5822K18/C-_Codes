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
    int n,k;
    cin>>n>>k;
    vector <vll> a(n);
    FOR(i,0,n)a[i].resize(n);
    FOR(i,0,n){
        FOR(j,0,n){
            cin>>a[i][j];
        }
    }
    vector <vll> b(n);
    FOR(i,0,n)b[i].resize(n);
    FOR(i,0,n){
        FOR(j,0,n){
            b[i][j]=a[n-1-i][n-1-j];
        }
    }
    int cnt=0;
    FOR(i,0,n){
        FOR(j,0,n){
            if(a[i][j]==b[i][j])continue;
            else cnt++;   
        }
    }
    cnt/=2;
    if(cnt>k){
        cout<<"NO\n";
    }
    else if(n%2==1 || (k-cnt)%2==0){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
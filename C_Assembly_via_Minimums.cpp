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
    int m=(n*(n-1))/2;
    vi b(m);
    FOR(i,0,m)cin>>b[i];
    sort(all(b));
    int jump=(n-1);
    int i=0;
    int temp_final=INT_MIN;
    while(i<m){
        int temp=INT_MAX;
        FOR(j,i,i+jump){
            temp=min(temp,b[i]);
        }
        i+=jump;
        jump--;
        temp_final=max(temp_final,temp);
        cout<<temp<<' ';
    }
    cout<<temp_final<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
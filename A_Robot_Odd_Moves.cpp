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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ANS cout<<ans<<'\n';
#define nl cout<<'\n';
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
using vb=vector <bool>;
void solve(){
    int a,b;
    cin>>a>>b;
    int i=0;
    int j=0;
    if(b>a+1){
        cout<<-1<<'\n';
        return;
    }
    cout<<a+(a+b)%2<<'\n';
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
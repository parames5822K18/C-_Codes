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
    int n,k;
    cin>>n>>k;
    vi a(n);
    FOR(i,0,n)cin>>a[i];
    map <int,int> freq;
    FOR(i,0,n){
        freq[a[i]]++;
    }
    int m=0;
    FOR(i,0,n){
        //This make alice takes k times and k-1 times
        //mex(B)will be that value 
        //mex(A)will not 
        if(freq[i]==2*k-1){
            YES
            return;
        }
    }
    NO
    return;

}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
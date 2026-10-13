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
    int n;
    cin>>n;
    vi a(n);
    FOR(i,0,n)cin>>a[i];
    map <int,int> freq;
    FOR(i,0,n){
        freq[a[i]]++;
    }
    int cnt=freq.size();
    if(cnt==1){
        NO
        return;
    }
    YES
    int key=freq.begin()->first;
    vi index;
    FOR(i,0,n){
        if(a[i]==key){
            index.pb(i+1);  
        }
    }
    int other=-1;
    FOR(i,0,n){
        if(a[i]!=key){
            other=i+1;
            break;
        }
    }
    FOR(i,0,n){
        if(a[i]!=key){
            cout<<index[0]<<' '<<i+1<<'\n';
        }
    }
    FOR(i,1,(int)index.size()){
        cout<<other<<' '<<index[i]<<'\n';
    }
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
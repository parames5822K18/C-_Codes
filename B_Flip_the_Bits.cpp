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
    string a,b;
    cin>>a>>b;
    vi indices;
    int count0=0,count1=0;
    vi valid(n,false);
    FOR(i,0,n){
        if(a[i]=='1')count1++;
        else count0++;
        if(count1==count0){
            valid[i]=true;
        }
    }
    bool flipped=false;
    FOR1(i,n-1,0){
        if(flipped){
            if(a[i]=='1')a[i]='0';
            else a[i]='1';
        }
        if(a[i]==b[i])continue;
        else if(!valid[i]){
            NO
            return;
        }
        else {
            flipped=!flipped;
        }
    }
    YES
    return;
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
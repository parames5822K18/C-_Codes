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
    string s;
    cin>>s;
    vi freq(26,0);
    for(auto x:s){
        freq[x-'a']++;
    }
    int n=0;
    FOR(i,0,26){
        if(freq[i]>0)n++;
    }
    for(int i=0;i+n<s.size();i++){
        if(s[i]!=s[i+n]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
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
    int n;
    char c;
    cin>>n;
    cin>>c;
    string s;
    cin>>s;
    int left=0;
    int right=n-1;
    int ans=0;
    while(left<=right){
        if(s[left]!=s[right]){
            if(s[left]==c || s[right]==c)ans++;
            else ans+=2;
        }
        left++;
        right--;
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
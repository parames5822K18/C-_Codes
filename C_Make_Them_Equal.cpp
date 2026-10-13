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
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    int ch_count=0;
    int gcd=1;
    for(int i=0;i<n;i++){
        if(s[i]==ch)ch_count++;
        else gcd=__gcd(gcd,i+1);
    }
    if((n-ch_count)==0){
        cout<<0;
        nl
        return; 
    }
    else {
        for(int x=1;x<=n;x++){
        bool ok = true; 
        for(int i=x;i<=n;i+=x){ 
            if(s[i-1]!=ch){ 
                ok=false; 
                break; } } 
                if(ok){ 
                    cout<<1<<'\n'; 
                    cout<<x<<'\n'; 
                    return; 
                }}
    }
    if((n-ch_count)==1){
        cout<<1<<'\n';
        if(s[n-1]==ch){
            cout<<n<<'\n';
            return;
        }
        else{
            cout<<n-1<<'\n';
            return;
        }
    }
    else{
        if(s[n-1]==ch){
            cout<<1<<'\n'<<n<<'\n';
        }
        else{
            cout<<2<<'\n';
            cout<<n-1<<' '<<n<<'\n';
        }

    }
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
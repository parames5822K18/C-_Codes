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
#define pb push_back
#define nl '\n'
#define revsort(a) sort(all(a),greater <int> ());
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
#define YES "YES\n";
#define NO "NO\n";
#define ANS cout<<"ANS\n";
void solve(){
    ll n;
    cin>>n;
    vll a(n);
    FORll(i,0,n)cin>>a[i];
    map <ll,ll> mp;
    FORll(i,0,31){
        FORll(j,0,n){
            if((a[j]>>i)&1 ==1){
                mp[i]++;
            }
        }
    }
    ll gcd=0;
    bool flag=true;
    for(auto x:mp){
        flag=false;
        if(gcd==0){
            gcd=x.second;
            continue;
        }
        gcd=__gcd(gcd,x.second);
    }
    if(flag){
        FORll(i,0,n){
            cout<<i+1<<' ';
        }
    }
    else{
        vll factors;
        for(ll i=1;i*i<=gcd;i++){
            if(gcd%i==0){
                factors.pb(i);
                if(i*i!=gcd){
                    factors.pb(gcd/i);
                }
            }
        }
        sort(all(factors));
        for(auto x:factors){
            cout<<x<<' ';
        }
    }
    cout<<nl;
}
int main(){
	fast
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
return 0;
}
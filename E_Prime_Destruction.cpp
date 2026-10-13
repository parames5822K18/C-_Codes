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

const ll N = 200000;
const ll INF = 1e18;

vll primes;
vll dp(N+1);

void precompute(){

    vector<bool> isPrime(N+1,true);

    isPrime[0]=false;
    isPrime[1]=false;

    for(ll i=2;i*i<=N;i++){
        if(isPrime[i]){
            for(ll j=i*i;j<=N;j+=i){
                isPrime[j]=false;
            }
        }
    }

    for(ll i=2;i<=N;i++){
        if(isPrime[i])
            primes.pb(i);
    }

    for(ll i=1;i<=N;i++)
        dp[i]=INF;

    dp[1]=0;

    for(ll i=1;i<=N;i++){

        for(ll j=0;j<(ll)primes.size() && i*primes[j]<=N;j++){

            dp[i*primes[j]]
                = min(dp[i*primes[j]],
                      dp[i]*primes[j]+1);
        }
    }
}

void solve(){

    ll n,k;
    cin>>n>>k;

    vll f(n+1,INF);

    for(ll i=1;i<=k;i++){

        for(ll j=i;j<=n;j+=i){

            f[j]=min(f[j],dp[j/i]);
        }
    }

    ll ans=0;

    FORll(i,0,n){

        ll x;
        cin>>x;

        ans+=f[x];
    }

    cout<<ans<<'\n';
}

int main(){

    fast

    precompute();

    tc{
        solve();
    }

    return 0;
}
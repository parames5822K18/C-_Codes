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
        ll n,c;
        cin>>n>>c;
        vll s(n);
        FORll(i,0,n)cin>>s[i];
        ll l=1LL;
        ll r=1e9;
        while(l<=r){
            ll mid=(l+r)/2;
            ll sum=0;
            FORll(i,0,n){
                ll x=s[i]+2*mid;
                sum+=(x*x);
                if(sum>c){
                    break;
                }
            }
            if(sum>c){
                r=mid-1;
            }
            else if(sum<c){
                l=mid+1;
            }
            else{
                cout<<mid<<'\n';
                return;
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
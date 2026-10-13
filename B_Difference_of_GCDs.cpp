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
    ll n,l,r;
    cin>>n>>l>>r;
    set <ll> s;
    vll a(n);
    
        bool flag=true;
        a[0]=l;
        FORll(i,1,n){
            a[i]=l+((i+1)-l%(i+1))%(i+1);
            if(a[i]>r){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
            FORll(i,0,n)cout<<a[i]<<' ';
        cout<<'\n';}
        else cout<<"NO\n";

}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
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
    int n,q;
    cin>>n>>q;
    vi a(n);
    vi t(q);
    FOR(i,0,n)cin>>a[i];
    FOR(j,0,q)cin>>t[j];
    vi pos_of_colours(50,-1);
    FOR(i,0,n){
        if(pos_of_colours[a[i]-1]==-1){
            pos_of_colours[a[i]-1]=i+1;
        }
    }
    FOR(j,0,q){
        cout<<pos_of_colours[t[j]-1]<<' ';
        FOR(i,0,50){
            if(pos_of_colours[i]!=-1 && pos_of_colours[i]<pos_of_colours[t[j]-1])pos_of_colours[i]++;
        }
        pos_of_colours[t[j]-1]=1;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
return 0;
}
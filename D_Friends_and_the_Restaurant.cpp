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
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
void solve(){
    int n;
    cin>>n;
    vi x(n),y(n);
    FOR(i,0,n)cin>>x[i];
    FOR(i,0,n)cin>>y[i];
    vi diff(n);
    FOR(i,0,n)diff[i]=(y[i]-x[i]);
    sort(all(diff));
    vector <bool> status(n,true);
    int ans=0;
    int j=n-1;
    int i=0;
    while(j>=0){
        if(status[j]==false || diff[j]<0){
            j--;
            continue;}
            while(i<j){
                if((diff[i]+diff[j])>=0 && status[i]==true){
                    ans++;
                    status[i]=false;
                    break;
                }
                i++;
            }
            status[j]=false;
        j--;
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
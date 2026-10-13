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
int main(){
	fast
    tc{
    	int n;
        cin>>n;
        vi a(n);
        FOR(i,0,n)cin>>a[i];
        int mx=1;
        FOR1(i,n-2,0){
            if(a[i]==a[n-1]){
                mx++;
            }
            else break;
        }
        int ans=0;
        if(mx==n){
            cout<<0<<'\n';
            continue;
        }
        int i=n-mx-1;
        while(i>=0){
            i-=(n-i-1);
            ans++;
            while(i>=0 && a[i]==a[n-1]){
                i--;
            }
        }
        cout<<ans<<'\n';
    }
return 0;
}
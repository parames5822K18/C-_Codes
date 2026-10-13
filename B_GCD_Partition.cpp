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
    	ll n;
        cin>>n;
        vll a(n);
        ll sum=0;
        FORll(i,0,n){
            cin>>a[i];
            sum+=a[i];
        }
        //sort(all(a));
        ll l1=a[0];
        ll l2=sum-a[0];
        ll mx=LLONG_MIN;
        ll i=1;
        while(i<n){
            mx=max(mx,__gcd(l1,l2));
            l1+=a[i];
            l2-=a[i];
            i++;
        }
        cout<<mx<<'\n';
    }
return 0;
}
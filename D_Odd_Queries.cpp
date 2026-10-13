#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORll(i,a,b) for(long long i=a;i<b;i++)
#define tc long long t; cin>>t; while(t--)
#define pb push_back
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
int main(){
	fast
    tc{
        ll n,q;
        cin>>n>>q;
        vll vec(n);
        vll preSum(n+1,0);
        FORll(i,0,n){
            cin>>vec[i];
        }
        FORll(i,0,n){
            preSum[i+1]=preSum[i]+vec[i];
        }
        ll sum=preSum[n];
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            ll sum1=(preSum[r]-preSum[l-1]);
            ll newSum=sum+sum1-(r-l+1)*k;
            if(newSum%2==0)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
return 0;
}
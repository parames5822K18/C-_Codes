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
        vll arr(n);
        FORll(i,0,n)cin>>arr[i];
        ll gcd1=arr[1];
        ll gcd2=arr[0];
        FORll(i,0,n){
            if(i%2){
                gcd1=__gcd(gcd1,arr[i]);
            }
            else{
                gcd2=__gcd(gcd2,arr[i]);
            }
        }
        bool flag1=true;
        bool flag2=true;
        FORll(i,0,n){
            if(i%2==0){
                if(arr[i]%gcd1==0){
                    flag1=false;
                }}
            else{
                if(arr[i]%gcd2==0){
                        flag2=false;
                }
                }
            
        }
        if(flag1)cout<<gcd1<<'\n';
        else if(flag2)cout<<gcd2<<'\n';
        else cout<<0<<'\n';
    }
return 0;
}
#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORll(i,a,b) for(long long i=a;i<b;i++)
#define tc int t; cin>>t; while(t--)
#define pb push_back
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair <ll,ll>;
int main(){
    vll primes;
    FORll(i,2,100000){
        ll cnt=0;
        FORll(j,1,sqrt(i)){
            if(i%j==0)cnt+=2;
        }
        if(ll(sqrt(i))*ll(sqrt(i))==i)cnt++;
        if(cnt==2)primes.pb(i);
    }
	fast
    tc{
        ll d;
        cin>>d;
        ll p,q;
        FORll(i,0,primes.size()){
            if(primes[i]>=d+1){
                p=primes[i];
                break;
            }
        }
        FORll(i,0,primes.size()){
            if((primes[i]-p)>=d){
                q=primes[i];
                break;
            }
        }

        cout<<min(1LL*p*p*p,1LL*p*q)<<'\n';
    }
return 0;
}
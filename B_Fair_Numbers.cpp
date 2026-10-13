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
        ll n;
        cin>>n;
        ll x=n-1;
        while(++x){
            vll x1;
            long long y=x;
            while(y){
               if(y%10!=0)x1.pb(y%10);
               y/=10;
            }
            bool fun=true;
            for(auto x2:x1){
                if(x%x2!=0){
                    fun=false;
                    break;
                }

            }
            if(fun){
                cout<<x<<'\n';
                break;
            }
        }
    }
return 0;
}
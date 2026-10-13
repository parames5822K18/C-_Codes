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
        //Finding highest power of 2 in range
        ll m=1;
        while(2*m<=(n-1))m*=2;
        ll j=0;
        vll v1;
        for(int i=m;i<(n);i++){
            if(i%2==0){
                v1.pb(j++);
                v1.pb(i);
            }
            else{
                v1.pb(i);
                v1.pb(j++);
            }
        }
        for(int i=j;i<min(m,n-1);i++){
            cout<<i<<' ';
        }
        for(auto x:v1)cout<<x<<' '; 
        cout<<'\n';
    }
return 0;
}
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
        vll a(n);
        vll x(q);
        //ll mx=LLONG_MIN;
        FORll(i,0,n){
            cin>>a[i];
            
        }
        vector <bool> status(30,false);
        FORll(i,0,q){
            cin>>x[i];
            status[x[i]-1]=true;
        }
        //sort(all(x));
        //reverse(all(x));
        FORll(i,0,q){
            if(status[x[i]-1]==false)continue;
            ll k=1LL<<(x[i]);
            FORll(j,0,n){
                if(a[j]%k==0){
                    a[j]+=(k/2);
                }
            }
            status[x[i]-1]=false;
        }
        FORll(i,0,n)cout<<a[i]<<' ';
        cout<<'\n';
        
    }
return 0;
}
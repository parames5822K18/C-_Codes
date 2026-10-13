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
        ll n,p;
        cin>>n>>p;
        vll a(n),b(n);
        FORll(i,0,n)cin>>a[i];
        FORll(i,0,n)cin>>b[i];
        vector <pair <ll,ll>> pl(n);
        FORll(i,0,n)pl[i]={b[i],a[i]};
        sort(all(pl));
        ll out=p;
        ll num=1;
        ll i=0;
        while(num!=n){
            if(pl[i].first<p){
                if((n-num)>pl[i].second){
                    num+=pl[i].second;
                    out+=(pl[i].second*pl[i].first);
                    i++;
                }
                else{
                    out+=((n-num)*pl[i].first);
                    num=n;
                }
            }
            else{
                out+=((n-num)*p);
                num=n;
            }
        }
        cout<<out<<'\n';
    }
return 0;
}
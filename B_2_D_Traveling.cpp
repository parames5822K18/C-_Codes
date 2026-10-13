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
using pll=pair <ll,ll>;
ll dist(pair <ll,pll> pl1,pair <ll,pll> pl2,ll k){
    if(pl1.second.second<=k && pl2.second.second<=k){
        return 0;
    }
    return abs(pl1.first-pl2.first)+abs(pl1.second.first-pl2.second.first);
}
int main(){
	fast
    tc{
        ll n,k,a,b;
        cin>>n>>k>>a>>b;
        vector <pair <ll,pll>> pl(n);
        FORll(i,0,n){
            cin>>pl[i].first>>pl[i].second.first;
            pl[i].second.second=i+1;
        }
        ll pos1,pos2;
        sort(pl.begin(),pl.end());
       /*for(int i=0;i<n;i++){
            cout<<pl[i].first<<' '<<pl[i].second.first<<' '<<pl[i].second.second<<'\n';
        }*/
        FORll(i,0,n){
            if(pl[i].second.second==a || pl[i].second.second==b){
                pos1=i;
                FOR(j,i+1,n){
                    if(pl[j].second.second==a || pl[j].second.second==b){
                        pos2=j;
                        break;
                    }
                }
                break;
            }
        }
        ll near1=-1,near2=-1;
        ll d1=LLONG_MAX,d2=LLONG_MAX;
        FORll(i,0,n){   
            ll d=dist(pl[i],pl[pos1],k);
            ll d11=dist(pl[i],pl[pos2],k);
            if(pl[i].second.second<=k){
                if(d1>d){
                    d1=d;
                    near1=i;}
            }
            if(pl[i].second.second<=k){
                if(d2>d11){
                    d2=d11;
                    near2=i;}
            }
        }
        //cout<<pos1<<' '<<near1<<' '<<pos2<<' '<<near2<<'\n' ;
        if(k==0)cout<<dist(pl[pos1],pl[pos2],k)<<'\n';
        else cout<<min(dist(pl[pos1],pl[pos2],k),((dist(pl[pos1],pl[near1],k)+dist(pl[pos2],pl[near2],k))))<<'\n';
    }
return 0;
}
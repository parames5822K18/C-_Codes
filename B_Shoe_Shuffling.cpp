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
void solve(){
    ll n;
    cin>>n;
    vector <pair <ll,pll>> arr(n);
    FORll(i,0,n){
        cin>>arr[i].first;
        arr[i].second.first=i+1;
    }
    ll num=0;
    map <ll,ll> map1;
    FORll(i,0,n)map1[arr[i].first]++;
    bool flag=true;
    for(auto x:map1)if(x.second==1)flag=false;
    if(flag){
        sort(all(arr));
        FORll(i,0,n){
            ll cnt=map1[arr[i].first];
            vll vec;
            FORll(j,i,i+cnt){
                vec.pb(arr[j].second.first);
            }
            arr[i].second.second=vec[cnt-1];
            FORll(j,i+1,i+cnt){
                arr[j].second.second=vec[j-i-1];
            }
            i+=(cnt-1);
        }
        vll out(n);
        FORll(i,0,n){
            out[arr[i].second.first-1]=arr[i].second.second;
        }
        FORll(i,0,n){
            cout<<out[i]<<' ';
        }
        cout<<'\n';
    }
    else cout<<-1<<'\n';
return;
}
int main(){
	fast
    tc{
        solve();
    }
return 0;
}
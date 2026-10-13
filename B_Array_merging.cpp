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
ll merge_pairs(const vector <pll> &sub1,const vector <pll> &sub2){
    ll min1=LLONG_MAX;
    ll max1=LLONG_MIN;
    FORll(i,0,sub1.size()){
        min1=min(min1,sub1[i].first);
        max1=max(max1,sub1[i].first);
    }
    FORll(i,0,sub2.size()){
        min1=min(min1,sub2[i].first);
        max1=max(max1,sub2[i].first);
    }
    vll freq(max1-min1+1,0);
    vll freq1(max1-min1+1,0);
    FORll(i,0,sub1.size()){
        freq[sub1[i].first-min1] = max(freq[sub1[i].first-min1],sub1[i].second);
    }
    FORll(i,0,sub2.size()){
        freq1[sub2[i].first-min1] = max(freq1[sub2[i].first-min1],sub2[i].second);
    }
    ll out=0;
    for(ll i=0;i<=(max1-min1);i++){
        out=max(out,freq[i]+freq1[i]);
    }
    return out;
}
ll solve(){
    ll n;
    cin>>n;
    vll a(n);
    vll b(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    vector <pll> sub1;
    vector <pll> sub2;
    for(ll i=0;i<n;i++){
        ll x=a[i];
        ll cnt=0;
        for(int j=i;j<n;j++){
            if(a[i]!=a[j] ){
                i=j-1;
                break;
            }
            cnt++;
            if(j==(n-1))i=n-1;
        }
        sub1.pb({x,cnt});
    }
    for(ll i=0;i<n;i++){
        ll x=b[i];
        ll cnt=0;
        for(ll j=i;j<n;j++){
            if(b[i]!=b[j]){
                i=j-1;
                break;
            }
            cnt++;
            if(j==(n-1))i=n-1;
        }
        sub2.pb({x,cnt});
    }
    //FORll(i,0,sub1.size())cout<<sub1[i].first<<' '<<sub1[i].second<<'\n';
    return merge_pairs(sub1,sub2);
}
int main(){
	fast
    tc{
        cout<<solve()<<'\n';
    }
return 0;
}
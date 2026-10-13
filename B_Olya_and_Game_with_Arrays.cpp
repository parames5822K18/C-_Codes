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
bool fun(const pll &vec,const pll &vec1){
    return vec.second<vec1.second;
}
ll solve(){
    ll n;
    cin>>n;
    vector <vll> vec(n);
    vll vec_size1(n);
    vector <pll> min1(n);
    for(ll i=0;i<n;i++){
        cin>>vec_size1[i];
        vec[i].resize(vec_size1[i]);
        for(ll j=0;j<vec_size1[i];j++){
            cin>>vec[i][j];
            if(j==1){
                min1[i].first=min(vec[i][0],vec[i][1]);
                min1[i].second=max(vec[i][1],vec[i][0]);
            }
            else if(j>1){
                if(vec[i][j]<=min1[i].first){
                     min1[i].second=min1[i].first;
                    min1[i].first=vec[i][j];
                   
                }
                else if(vec[i][j]<min1[i].second){
                    min1[i].second=vec[i][j];
                }
            }
        }
    }
    if(n==1){
        return min1[0].first;
    }
    sort(all(min1), fun);
    ll sum=0;
    ll x=min1[0].first;
    for(ll j=1;j<n;j++){
        sum+=min1[j].second;
        x=min(x,min1[j].first);
    }
    return sum+x;
}
int main(){
	fast
    tc{
        cout<<solve()<<'\n';
    }
return 0;
}
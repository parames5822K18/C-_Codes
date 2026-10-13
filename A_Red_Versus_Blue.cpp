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
void solve(){
    ll n,r,b;
    cin>>n>>r>>b;
    ll grps=b+1;
    ll x1=r/grps;
    ll rem=r%grps;
    string s;
    for(int i=0;i<b;i++){
        for(int i=0;i<x1 && r>0;i++){
            s+='R';
            r--;
        }
        if(rem>0){
            s+='R';
            rem--;
            r--;
        }
        s+='B';
    }
    while(r--)s+='R';
    cout<<s<<'\n';
return;
}
int main(){
	fast
    tc{
        solve();
    }
return 0;
}
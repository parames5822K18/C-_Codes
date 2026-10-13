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
        ll n,m;
        cin>>n>>m;
        vll freq(26,0);
        vector <string> a(n);
        vector <string> b(m);
        FORll(i,0,n){
            cin>>a[i];
            freq[a[i][0]-'a']++;
        }
        FORll(i,0,m)cin>>b[i];
        bool fun=true;
        FORll(i,0,m){
            for(auto x:b[i]){
                if(freq[x-'A']==0)fun=false;
            }
        }
        if(fun)cout<<"YES\n";
        else cout<<"NO\n";
    }
return 0;
}
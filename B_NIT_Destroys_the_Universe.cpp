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
        vll vec(n);
        FORll(i,0,n)cin>>vec[i];
        ll x=0;
        if(vec[0]!=0)x++;
        FORll(i,1,n){
            if(vec[i]!=0 && vec[i-1]==0)x++;
        } 
        x=min(x,2LL);
        cout<<x<<'\n';      
    }
return 0;
}
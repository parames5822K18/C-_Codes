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
        int n;
        cin>>n;
        vll vec(n);
        FOR(i,0,n)cin>>vec[i];
        ll n0=0,n1=0;
        FOR(i,0,n){
            if(vec[i]==1)n1++;
            if(vec[i]==0)n0++;
        }
        ll out=pow(2,n0);
        cout<<out*n1<<'\n';
    }
return 0;
}
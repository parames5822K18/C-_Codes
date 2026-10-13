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
int gcd(int a,int b){
    if(a==0)return b;
    else return gcd(b%a,a);
}
int main(){
	fast
    tc{
        int n;
        cin>>n;
        vi vec(n);
        int mn=INT_MAX;
        FOR(i,0,n){
            cin>>vec[i];
            mn=min(vec[i],mn);
        }
        if(vec[0]<vec[n-1])cout<<gcd(vec[0],vec[n-1])<<'\n';
        else cout<<gcd(vec[n-1],vec[0])<<'\n';

    }
return 0;
}
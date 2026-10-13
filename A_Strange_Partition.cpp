#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(long long i=a;i<b;i++)
#define tc int t; cin>>t; while(t--)
#define pb push_back
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
ll beauty(ll num,ll x){
    if(num%x==0)return num/x;
    return num/x+1;
}
int main(){
	fast
    tc{
        ll n,x;
        cin>>n>>x;
        vll vec(n);
        ll min1=0,max1=0;
        FOR(i,0,n){
            cin>>vec[i];
            min1+=vec[i];
            max1+=beauty(vec[i],x);
        }
        min1=beauty(min1,x);
        cout<<min1<<' '<<max1<<'\n';
    }
return 0;
}
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
       ll n,k;
       cin>>n>>k;
       vll vec(n);
       FORll(i,0,n)cin>>vec[i];
       if(k!=4){
        ll mn=-1;
        FOR(i,0,n){
            if(vec[i]%k==0)mn=k;
            mn=max(mn,vec[i]%k);
            }
        cout<<k-mn<<'\n'; }
        else{
            ll div4=0,div2=0,div3=0;
            FOR(i,0,n){
                if(vec[i]%2==0)div2++;
                if(vec[i]%4==0)div4++;
                if(vec[i]%4==3)div3++;
            }
            if(div4!=0 || div2>1)cout<<0<<'\n';
            else if(div2==1 || div3!=0)cout<<1<<'\n';
            else cout<<2<<'\n';
        }
    }
return 0;
}
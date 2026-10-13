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
        ll n,x;
        cin>>n>>x;
        vll a(n);
        FORll(i,0,n)cin>>a[i];
        sort(all(a));
        vll water(n,0);
        ll out=0;
        ll height=a[0];
        FORll(i,1,n){
            water[i]=water[i-1]+(i)*(a[i]-a[i-1]);
            if(water[i]>x){
                if(a[i]>a[i-1]+1){
                    ll extra1=(x-out)/i;
                    out+=extra1*i;
                    height+=extra1;
                    }
                
                break;}
            
            else {
                out=water[i];
                height=a[i];
            }
        }
        if(out<x){
            ll extra=(x-out)/n;
            out+=extra*n;
            height+=extra;
        }
        
        cout<<height<<'\n';
    }
return 0;
}
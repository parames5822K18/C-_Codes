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
        vll vec;
        ll num=n;
        while(num){
            ll x=num%10;
            vec.pb(x);
            num/=10;
        }
        ll out=LLONG_MAX;
        if(n%25==0)cout<<0<<'\n';
        else{
            FOR(i,0,vec.size()){
                if(vec[i]==0){
                    FOR(j,i+1,vec.size()){
                        if(vec[j]==0 || vec[j]==5){
                            ll x=j-1;
                            out=(out<x)?out:x;
                        }
                    }
                }
                if(vec[i]==5){
                    FOR(j,i+1,vec.size()){
                        if(vec[j]==2 || vec[j]==7){
                            ll x=j-1;
                            out=(out<x)?out:x;
                        }
                    }
                }
            }
            cout<<out<<'\n';
        }
    }
return 0;
}
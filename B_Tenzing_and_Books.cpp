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
        int  x;
        cin>>x;
        vi a(n);
        vi b(n);
        vi c(n);
        
        cin>>a[0];
        vi a1;
        vi b1;
        vi c1;
        if(a[0]<=x)a1.pb(a[0]);
        FOR(i,1,n){
            cin>>a[i];
            a[i]=a[i]|a[i-1];
            if(a[i]<=x && a[i]!=a[i-1])a1.pb(a[i]);
        }
        cin>>b[0];
        if(b[0]<=x)b1.pb(b[0]);
        FOR(i,1,n){
            cin>>b[i];
            b[i]=b[i]|b[i-1];
            if(b[i]<=x && b[i]!=b[i-1])b1.pb(b[i]);
        }
        cin>>c[0];
        if(c[0]<=x)c1.pb(c[0]);
        FOR(i,1,n){
            cin>>c[i];
            c[i]=c[i]|c[i-1];
            if(c[i]<=x && c[i]!=c[i-1])c1.pb(c[i]);
        }
        a1.insert(a1.begin(),0);
        b1.insert(b1.begin(),0);
        c1.insert(c1.begin(),0);
            bool fun=false;
            for(auto x1:a1){
                for(auto y:b1){
                    for(auto z:c1){
                        if((x1|y|z)==x)fun=true;
                    }
                }
            }
            if(fun)cout<<"Yes\n";
            else cout<<"No\n";
    }
return 0;
}
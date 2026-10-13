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
        char c;
        cin>>n;
        cin>>c;
        string s;
        cin>>s;
        if(c=='g')cout<<0<<'\n';
        else{
            vi c_indices;
            vi g_indices;
            FOR(i,0,n){
                if(s[i]==c)c_indices.pb(i);
                if(s[i]=='g')g_indices.pb(i);
            }
            g_indices.pb(g_indices[0]+n);
            int mn=-1;
            FOR(i,0,c_indices.size()){
                FOR(j,0,g_indices.size()){
                    if(g_indices[j]>c_indices[i]){
                        mn=max((g_indices[j]-c_indices[i]),mn);
                        break;
                    }
                    
                }
            }
            cout<<mn<<'\n';
        }
    }
return 0;
}
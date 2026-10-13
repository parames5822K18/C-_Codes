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
        string s;
        cin>>s;
        ll x=0;
        while(s.find("()")!=std::string::npos){
            ll index=s.find("()");
            s.erase(index,1);
            s.erase(index,1);
        }
        cout<<(s.size()/2)<<'\n';
    }
return 0;
}
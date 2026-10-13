#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define tc int t; cin>>t; while(t--)
#define pb push_back
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define out if(solve())cout<<"YES\n"; else cout<<"NO\n";
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
bool solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a+c==2*b)return true;
    if(((c+a)%(2*b))==0)return true;
    if((2*b-c)>0 &&(2*b-c)%a==0)return true;
    if((2*b-a)>0 && (2*b-a)%c==0)return true;
    return false;
}
int main(){
	fast
    tc{
        out
    }
return 0;
}
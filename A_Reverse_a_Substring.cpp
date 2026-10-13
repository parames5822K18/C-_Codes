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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vll suff(n);
    suff[n-1]=(s[n-1]-'a');
    ll mn=suff[n-1];
    for(ll i=n-2;i>=0;i--){
        mn=(mn<(s[i]-'a'))?mn:(s[i]-'a');
        suff[i]=mn;
    }
    FORll(i,0,n){
        if(suff[i]<(s[i]-'a')){
            cout<<"YES\n";
            FORll(j,i+1,n){
                if(s[i]>s[j]){
                    cout<<i+1<<' '<<j+1<<'\n';
                    break;
                }
            }
            return 0;
        }
    }
    cout<<"NO"<<'\n';
return 0;
}
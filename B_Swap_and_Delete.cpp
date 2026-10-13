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
        string s;
        cin>>s;
        ll num0=0;
        ll num1=0;
        ll n=s.size();
        FORll(i,0,n){
            if(s[i]=='0')num0++;
            else num1++;
        }
        if(num0==num1)cout<<0<<'\n';
        else if(num0>num1){
            ll x=0,y=0,i;
            for( i=0;i<n;i++){
                if(s[i]=='0' && x<num1)x++;
                else if(s[i]=='1')y++;
                else break;
            }
            cout<<(n-i)<<'\n';
        }
        else{
            ll x=0,y=0,i;
            for( i=0;i<n;i++){
                if(s[i]=='1' && x<num0)x++;
                else if(s[i]=='0' )y++;
                else break;
            }
            cout<<(n-i)<<'\n';
        }
    }
return 0;
}
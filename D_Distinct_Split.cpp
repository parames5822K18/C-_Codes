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
       string s;
       cin>>s;
       vll pref(n,1);
       vll suff(n,1);
       vll freq(26,0);
       freq[s[0]-'a']++;
       FORll(i,1,n){
        if(freq[s[i]-'a']==0)pref[i]=1+pref[i-1];
        else pref[i]=pref[i-1];
        freq[s[i]-'a']++;
       }
       vll freq1(26,0);
       freq1[s[n-1]-'a']++;
       for(ll i=n-2;i>=0;i--){
        if(freq1[s[i]-'a']==0)suff[i]=1+suff[i+1];
        else suff[i]=suff[i+1];
        freq1[s[i]-'a']++;
       }
       ll out=-1;
       FORll(i,0,n-1){
        out=max(out,pref[i]+suff[i+1]);
       }
       cout<<out<<'\n';
    }
return 0;
}
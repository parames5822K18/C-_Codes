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
        vi a(n);
        int mn=INT_MAX;
        int nega=0;
        int n0=0;
        ll sum=0;
        FORll(i,0,n){
            cin>>a[i];
            mn=min(mn,abs(a[i]));
            sum+=abs(a[i]);
            if(a[i]<0)nega++;
            else if(a[i]==0)n0++;
        }
        if(nega%2==0 || n0>=1)cout<<sum<<'\n';
        else cout<<sum-2*mn<<'\n';
    }
return 0;
}
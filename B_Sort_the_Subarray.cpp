#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORll(i,a,b) for(long long i=a;i<b;i++)
#define FOR1(i,a,b) for(int i=a;i>=b;i--)
#define FORLL1(i,a,b) for(long long i=a;i>=b;i--)
#define tc long long t; cin>>t; while(t--)
#define pb push_back
#define revsort(a) sort(all(a),greater <int> ());
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
int main(){
	fast
    tc{
    	int n;
        cin>>n;
        vi a(n),b(n);
        FOR(i,0,n)cin>>a[i];
        FOR(i,0,n)cin>>b[i];
        vi diff(n);
        FOR(i,0,n)diff[i]=b[i]-a[i];
        int unequal_st=0;
            int unequal_end=n-1;
            FOR(i,0,n){
                if(diff[i]!=0){
                    unequal_st=i;
                    break;
                }
            }
            FOR1(i,n-1,0){
                if(diff[i]!=0){
                    unequal_end=i;
                    break;
                }
            }
            int mn=INT_MAX;
            int mx=INT_MIN;
            FOR(i,unequal_st,unequal_end+1){
                mn=min(mn,a[i]);
                mx=max(mx,a[i]);   
            }
            int k=0;
        if(unequal_end==n-1 && unequal_st==0){
            cout<<1<<' '<<n<<'\n';
            continue;
        }
        for(int i=unequal_st-1;i>=0;i--){
            if(a[i]<=mn){
                mn=a[i];
                k++;}
            else break;
        }
        unequal_st-=k;
        int j=0;
        for(int i=unequal_end+1;i<n;i++){
            if(a[i]>=mx){
                j++;
                mx=a[i];
            }
            else break;
        }
        unequal_end+=j;
        cout<<unequal_st+1<<' '<<unequal_end+1<<'\n';
    }
return 0;
}
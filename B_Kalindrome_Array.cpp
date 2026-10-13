/*
   SPLR
   ███████████████████████████████████████████████
   ██                                           ██
   ██                Rx_PARAM                   ██
   ██                                           ██
   ███████████████████████████████████████████████
 */
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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
void solve(){
    int n;
    cin>>n;
    vi a(n);
    FOR(i,0,n)cin>>a[i];
    int left=0;
    int right=n-1;
    int cn1=-1;
    int cn2=-1;
    while(left<=right){
        if(a[left]!=a[right]){
            cn1=a[left];
            cn2=a[right];
            break;
        }
        left++;
        right--;
    }
    vi a1;
    vi a2;
    FOR(i,0,n){
        if(a[i]!=cn1){
            a1.pb(a[i]);
        }
        if(a[i]!=cn2){
            a2.pb(a[i]);
        }
    }
    bool flag1=true;
    bool flag2=true;
    int left1=0;
    int right1=a1.size()-1;
    int left2=0;
    int right2=a2.size()-1;
    while(left1<=right1){
        if(a1[left1]!=a1[right1])flag1=false;
        left1++;
        right1--;
    }
    while(left2<=right2){
        if(a2[left2]!=a2[right2])flag2=false;
        left2++;
        right2--;
    }
    if(flag1 || flag2)YES
    else NO
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
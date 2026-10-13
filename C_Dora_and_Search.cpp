/*
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
#define ANS cout<<ans<<'\n';
#define nl cout<<'\n';
using namespace std;
using ll =long long;
using vll=vector <long long>;
using vi=vector <int>;
using pi=pair <int,int>;
using pll=pair<ll,ll>;
using vb=vector <bool>;
void solve(){
    int n;
    cin>>n;
    vi a(n);
    FOR(i,0,n)cin>>a[i];
    vi b=a;
    sort(all(b));
    int i=0;
    int j=n-1;
    int left=0;
    int right=n-1;
    while((right-left)>=3){
        if(a[left]==b[i]){
            left++;
            i++;
        }
        else if(a[left]==b[j]){
            left++;
            j--;
        }
        else if(a[right]==b[i]){
            right--;
            i++;
        }
        else if(a[right]==b[j]){
            right--;
            j--;
        }
        else{
            cout<<left+1<<' '<<right+1<<'\n';
            return;
        }
    }
    cout<<-1<<'\n';
    return;
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
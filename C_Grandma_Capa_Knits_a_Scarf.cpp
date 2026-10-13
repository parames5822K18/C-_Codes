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
    string s;
    cin>>s;
    char c='a';
    int ans=INT_MAX;
    bool flag=false;
    FOR(k,0,26){
        char temp=c+k;
        int i=0;
        int j=n-1;
        int temp1=0;
        while(i<=j){
            if(s[i]!=s[j]){
                if(s[i]==temp){
                    i++;
                    temp1++;
                }
                else if(s[j]==temp){
                    j--;
                    temp1++;
                }
                else{
                    break;
                }
            }
            else{
                i++;
                j--;
            }
        }
        if(i==j || j<i){
            ans=min(ans,temp1);
            flag=true;

        }
    }
    if(flag){
        cout<<ans;
        nl
    }
    else {
        cout<<-1<<'\n';
    }
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
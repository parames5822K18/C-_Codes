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
    FOR(i,0,26){
        char temp='a'+i;
        if(s.find(temp)==std::string::npos){
            cout<<temp;
            nl
            return;
        }
    }
    FOR(i,0,26){
        char temp='a'+i;
        FOR(j,0,26){
            char temp1='a'+j;
            string s1;
            s1+=temp;
            s1+=temp1;
            if(s.find(s1)==std::string::npos){
                cout<<s1;
                nl
                return;
            }
        }
    }
    FOR(i,0,26){
        char temp='a'+i;
        FOR(j,0,26){
            char temp1='a'+j;
            FOR(k,0,26){
                char temp2='a'+k;
                string s1;
                s1+=temp;
                s1+=temp1;
                s1+=temp2;
                if(s.find(s1)==std::string::npos){
                    cout<<s1;
                    nl
                    return;
                }
            }
        }
    }
}
int main(){
	fast
    tc{
    	solve();
    }
return 0;
}
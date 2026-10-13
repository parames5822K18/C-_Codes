#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define tc int t; cin>>t; while(t--)
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
        string a1,a2;
        cin>>a1>>a2;
        bool ok=true;
        FOR(i,0,a1.size()){
            int f1=count(all(a1),a1[i]);
            int f2=count(all(a2),a1[i]);
            if(f1==f2)continue;
            else if(f1<f2){
                ok=false;
                break;
            }
            else if(f1>f2){
                a1.erase(i,1);
                i--;
            }
        }
        if(ok && a1==a2)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
return 0;
}
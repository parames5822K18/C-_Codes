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
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.length();
        int l2=s2.length();
        int l=min(l1,l2);
        int out=0;
        for(int len=l;len>0;len--){
            for(int i=0;i+len<=l1;i++){
                if((l1-i)<len)break;
                for(int j=0;j<l2;j++){
                    if(((l2-j))<len)break;
                    if(s1.substr(i,len)==s2.substr(j,len)){
                        out=max(out,len);
                    }
                }
            }
        }
        cout<<l1+l2-2*out<<'\n';
    }
return 0;
}
#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define tc int t; cin>>t; while(t--)
#define push_back pb
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
        string a,b;
        cin>>a>>b;
        FOR(i,0,n-3){
            if(a[i]==b[i])continue;
            string temp=a.substr(i,3);
            if(temp=="001")a.replace(i,3,"100");
            else if(temp=="100")a.replace(i,3,"001");
            else if(temp=="011")a.replace(i,3,"110");
            else if(temp=="110")a.replace(i,3,"011");
            else break;
        }
        for(int i=n-1;i>=2;i--){
            if(a[i]==b[i])continue;
            string temp=a.substr(i-2,3);
            if(temp=="001")a.replace(i-2,3,"100");
            else if(temp=="100")a.replace(i-2,3,"001");
            else if(temp=="011")a.replace(i-2,3,"110");
            else if(temp=="110")a.replace(i-2,3,"011");
            else break;
        }
        if(a==b)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
return 0;
}
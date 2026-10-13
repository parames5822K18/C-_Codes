#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
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
        string s;
        cin>>s;
        s[0]=s[s.length()-1];
        cout<<s<<'\n';
        
    }
return 0;
}
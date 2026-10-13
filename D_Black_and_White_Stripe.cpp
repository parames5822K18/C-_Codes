#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORll(i,a,b) for(long long i=a;i<b;i++)
#define tc int t; cin>>t; while(t--)
#define pb push_back
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using vi=vector <int>;
using pi=pair <int,int>;
int main(){
	fast
    tc{
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int left=0;
        int right=left+k-1;
        int out=-1;
        int cnt=0;
        for(int i=0;i<=right;i++)if(s[i]=='B')cnt++;
        out=cnt;
        while(right<n){
            if(s[left++]=='B')cnt--;
            if(s[++right]=='B')cnt++;
            out=max(out,cnt);
            if(out==k)break;
        }
        cout<<k-out<<'\n';
    }
return 0;
}
#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORll(i,a,b) for(long long i=a;i<b;i++)
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
        int n,m;
        cin>>n>>m;
        int mat[n][m];
        int c1=0,c2=0;
        int sum=0,mn=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
                sum+=abs(mat[i][j]);
                mn=min(mn,abs(mat[i][j]));
                if(mat[i][j]>0)c1++;
                else c2++;
            }
        }
        if(c2%2!=0)sum-=(2*mn);
        cout<<sum<<'\n';
    }
return 0;
}
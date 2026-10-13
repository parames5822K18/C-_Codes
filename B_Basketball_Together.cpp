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
	int n,d;
        cin>>n>>d;
        vi p(n);
        FOR(i,0,n)cin>>p[i];
        sort(all(p));
        int right_p=n-1;
        int left_p=-1;
        int out=0;
        int x=n-1;
        while(1){
            int z=((d/p[x])+1);
            if(n<z)break;
            else{
                n-=z;
                out++;
                x--;
            }
        }
        cout<<out<<'\n';
return 0;
}
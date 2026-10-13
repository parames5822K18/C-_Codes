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
        int n;
        cin>>n;
        vi vec(n);
        FOR(i,0,n)cin>>vec[i];
        vi vec1={all(vec)};
        sort(all(vec1));
        bool found=false;
        for(int i=0;i<n-1;i++){
            if(vec1[i]==vec1[i+1]){
                found=true;
                break;
            }
        }
        //case if vector has duplicates
        if(found){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
return 0;
}
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
using pl=pair <long long,long long>;
int main(){
	fast
    tc{
        ll n;
        cin>>n;
        vector <pair <ll,pl>> coordinates(n); 
        FORll(i,0,n)coordinates[i].second.first=i;
        FORll(i,0,n){
            cin>>coordinates[i].first;
        }
        sort(all(coordinates));
        reverse(all(coordinates));
        ll right=0;
        ll left=0;
        FORll(i,0,n){
            if(i%2==0){
                coordinates[i].second.second=(--left);
            }
            else coordinates[i].second.second=(++right);
        }
        vll output(n);
        ll s=0;
        FORll(i,0,n){
            output[coordinates[i].second.first]=coordinates[i].second.second;
            s+=2*abs(coordinates[i].second.second)*coordinates[i].first;
        }
        cout<<s<<'\n';
        cout<<0<<' ';
        FORll(i,0,n)cout<<output[i]<<' ';
        cout<<'\n';

    }
return 0;
}
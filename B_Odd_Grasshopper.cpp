    #include<bits/stdc++.h>
    #define all(x) x.begin(),x.end()
    #define FOR(i,a,b) for(long long i=a;i<b;i++)
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
            ll x,n;
            cin>>x>>n;
            ll out=x;
            if(x%2==0){
                if(n%4==0){
                    out=x;
                }
                if(n%4==1){
                    out=x-n;
                }
                if(n%4==2){
                    out=x+1;
                }
                if(n%4==3){
                    out=x+n+1;
                }
               }
            else{
                if(n%4==0){
                    out=x;
                }
                if(n%4==1){
                    out=x+n;
                }
                if(n%4==2){
                    out=x-1;
                }
                if(n%4==3){
                    out=x-n-1;
                }
            }
            cout<<out<<'\n';
        }
    return 0;
    }
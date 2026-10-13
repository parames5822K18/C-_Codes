#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>k>>x;
        if(x==1){
            if(k>=3){
                cout<<"YES"<<'\n';
                cout<<n/2<<'\n';
                if(n%2){
                    cout<<3<<' ';
                    for(int i=1;i<n/2;i++)cout<<2<<' ';
                    cout<<'\n';
                }
                else{
                    for(int i=0;i<n/2;i++)cout<<2<<' ';
                    cout<<'\n';
                }
            }
            else{
                if(k==1){
                    cout<<"NO"<<'\n';
                }
                if(k==2){
                    if(n%2==0){
                        cout<<"YES"<<'\n'<<n/2<<'\n';
                    for(int i=0;i<n/2;i++)cout<<2<<' ';
                    cout<<'\n';}
                    else cout<<"NO"<<'\n';
                }
            }
        }
        else{
            cout<<"YES"<<'\n'<<n<<'\n';

            for(int i=0;i<n;i++)cout<<1<<' ';
            cout<<'\n'; 
        }
    }
return 0;
}
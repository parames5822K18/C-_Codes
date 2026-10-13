#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int x=0;
        for(int i=0;i<n;++i){
            cin>>a[i];
            x^=a[i];
        }
        if(n%2)cout<<x<<'\n';
        else if(x==0){
            cout<<0<<'\n';
        }
        else cout<<-1<<'\n';
        }
return 0;
}
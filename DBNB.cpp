#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long  t;
    cin>>t;
    for(long i=0;i<t;i++){
        int n,s,x;
        cin>>n>>s>>x;
        int a[n];
        for(int j=0;j<n;j++)cin>>a[j];
        long s1=0;
        for(int j=0;j<n;j++)s1+=a[j];
        if((s-s1)>=0){
            ((s-s1)%x)?cout<<"NO\n":cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}

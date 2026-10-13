#include<bits/stdc++.h>
using namespace std;
void solve(int b[],int n){
    int a[2*n];
    a[0]=b[0];
    int j=1;
    for(int i=1;i<n;i++){
        if(b[i-1]>b[i]){
            a[j++]=1;
        }
        a[j++]=b[i];
    }
    cout<<j<<'\n';
    for(int i=0;i<j;i++){
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++)cin>>b[i];
        solve(b,n);
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,low;
        cin>>n;
        low=n+1;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            low=(low>a[i])?a[i]:low;
        }
        if(low==a[0])cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
return 0;
}
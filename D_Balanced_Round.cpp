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
        int k;
        cin>>k;
        vector <int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr.begin(),arr.end());
        int out=0;
        int ans=1;
        for(int i=1;i<n;i++){
            if((arr[i]-arr[i-1])<=k)ans++;
            else{
                out=(ans>out)?ans:out;
                ans=1;
        }}
        out=(ans>out)?ans:out;
        cout<<n-out<<'\n';
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long arr[n];
        long long out=b;
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=a)out+=(a-1);
            else out+=arr[i];
        }
        cout<<out<<'\n';
    }
return 0;
}
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
        int arr[n];
        int b[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++){
            b[i]=n-arr[i]+1;
        }
        for(int i=0;i<n;i++)cout<<b[i]<<' ';
        cout<<'\n';
    }
return 0;
}
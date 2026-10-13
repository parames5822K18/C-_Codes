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
        vector <int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int max1=0;
        for(int i=1;i<n-1;i++){
            max1=max(max1,arr[i]-arr[0]);
        }
        for(int i=0;i<n-1;i++){
            max1=max(max1,arr[n-1]-arr[i]);
        }
        for(int i=0;i<n-1;i++){
            max1=max(max1,arr[i]-arr[i+1]);
        }
        max1=max(max1,arr[n-1]-arr[0]);
        cout<<max1<<'\n';
    }
return 0;
}
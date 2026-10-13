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
        for(int i=0;i<n;i++)cin>>arr[i];
        int j=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]%2==arr[i+1]%2)j++;
        }
        cout<<j<<'\n';
    }
return 0;
}
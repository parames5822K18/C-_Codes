#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        if(k>=2)cout<<"YES"<<'\n';
        else{
            bool inc=true;
            for(int i=1;i<n;i++){
                if(arr[i]<arr[i-1])inc=false;
            }
            if(inc)cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
}
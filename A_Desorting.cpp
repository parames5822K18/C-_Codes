#include<bits/stdc++.h>
using namespace std;
bool sort(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i])return false;
    }
    return true;
}
int solve(int arr[],int n){
    if(!sort(arr,n))return 0;
    int min=INT_MAX;
    for(int i=0;i<n-1;i++){
        if((arr[i+1]-arr[i])<min)min=(arr[i+1]-arr[i]);
    }
    return (1+min/2);
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
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<solve(a,n)<<'\n';
    }
return 0;
}
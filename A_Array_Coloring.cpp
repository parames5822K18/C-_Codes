#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],int n){
    int N_odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==1)N_odd++;
    }
    if(N_odd%2==0)return true;
    else return false;
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
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        if(solve(arr,n))cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n){
    int out=0;
    int prev=-1;
    int j=1;
    for(int i=0;i<n;i++){
        if(arr[i]==1 ){
            out=(out>(i-prev-1))?out:(i-prev-1);
            prev=i;
        }
    }
    out=(out>(n-prev-1))?out:(n-prev-1);
    return out;
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
        cout<<solve(arr,n)<<'\n';
    }
return 0;
}
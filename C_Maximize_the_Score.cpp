#include<bits/stdc++.h>
using namespace std;
int solve(pair<int,int> x[],int low,int high){
    
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
        int arr[2*n];
        for(int i=0;i<2*n;i++)cin>>arr[i];
        pair<int,int> x[n];
        for(int i=1;i<=n;i++){
            for(int j=0;j<2*n;j++){
                if(arr[j]==i){
                    x[i-1].first=j;
                    break;
                }
            }
            for(int j=2*n-1;j>=0;j--){
                if(arr[j]==i){
                    x[i-1].second=j;
                    break;
                }
            }
        }
    }
return 0;
}
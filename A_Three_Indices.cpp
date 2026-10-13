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
        int i,j,k;
        for( j=1;j<n-1;j++){
            for(i=0;i<j;++i){
                if(arr[i]<arr[j])break;
            }
            for(k=j+1;k<n;k++){
                if(arr[k]<arr[j])break;
            }
            if(i!=j && k!=n)break;
        }
        if(j==n-1)cout<<"NO"<<'\n';
        else{
            cout<<"YES"<<'\n';
            cout<<i+1<<' '<<j+1<<' '<<k+1<<'\n';
        }
    }
return 0;
}
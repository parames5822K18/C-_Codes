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
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]>arr[j]){
                    arr[i]=arr[i]^arr[j];
                    arr[j]=arr[i]^arr[j];
                    arr[i]=arr[i]^arr[j];
                }
            }
        }
        arr[0]^=arr[n-1];
        arr[n-1]^=arr[0];
        arr[0]^=arr[n-1];
        int sum=arr[0];
        bool ugly=false;
        for(int i=1;i<n;i++){
            if(arr[i]==sum){
                ugly=true;
                break;
            }
            sum+=arr[i];
        }
        if(!ugly){
            cout<<"YES"<<'\n';
            for(int i=0;i<n;i++)cout<<arr[i]<<' ';
            cout<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
return 0;
}
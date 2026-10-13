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
        int N=1;
        int C=0;
        int k1=arr[0];
        int k2;
        for(int i=1;i<n;i++)if(arr[i]!=k1){
            N++;
            k2=arr[i];
            break;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==k1)C++;
            else if(arr[i]!=k2){
                N++;
                break;
            }
        }
        if((N==1)||(N==2 && (C==n/2 || C==(n-n/2))))cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
return 0;
}
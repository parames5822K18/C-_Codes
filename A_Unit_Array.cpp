#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n){
    int sum=0;
    int N_count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]==-1)N_count++;
    }
    if(N_count%2==0 && sum>=0)return 0;
    else if(N_count%2==0 && sum<0)return (((1-sum)/2)%2)?(((1-sum)/2)+1):((1-sum)/2);
    else if(N_count%2==1 && sum>=0)return 1;
    else{
        int x=1;
        sum+=2;
        x+=(sum>=0)?0:(((1-sum)/2)%2)?(((1-sum)/2)+1):((1-sum)/2);
        return x;
    }
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
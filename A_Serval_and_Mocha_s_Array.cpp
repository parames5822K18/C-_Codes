#include<bits/stdc++.h>
using namespace std;
int GCD(int n1,int n2){
    if(n1<n2){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    if(n1%n2==0)return n2;
    return GCD(n2,n1%n2);
}
bool solve(int arr[],int n){
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(GCD(arr[i],arr[j])<=2)return true;
            }
        }
    return false;
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
        if(solve(arr,n))cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
return 0;
}
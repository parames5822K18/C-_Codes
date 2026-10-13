#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<0)min=(min<(0-arr[i]))?min:(0-arr[i]);
        else min=(min<arr[i])?min:arr[i];
    }
    return min;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<solve(arr,n)<<'\n';
return 0;
}
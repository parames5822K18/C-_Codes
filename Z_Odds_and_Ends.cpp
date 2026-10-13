#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio();
    cin.tie(NULL);
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)cin>>arr[i];
    if( t%2 && arr[0]%2 && arr[t-1]%2)cout<<"Yes";
    else cout<<"No";
return 0;
}
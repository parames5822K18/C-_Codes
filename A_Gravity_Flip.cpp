#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int i=0,n;
    cin>>n;
    vector <int> arr;
    for(i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    for(i=0;i<n;i++)cout<<arr[i]<<' ';
}
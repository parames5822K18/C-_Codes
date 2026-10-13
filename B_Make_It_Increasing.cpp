#include<bits/stdc++.h>
using namespace std;
int makeCrct(long long arr[],long long i){
    long long out=0;
    while(arr[i]>=arr[i+1]){
        if(arr[i]==0)return -1;
        out++;
        arr[i]/=2;
    } 
    return out;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++)cin>>arr[i];
        bool fun=true;
        long long out=0;
        for(long long i=n-2;i>=0;i--){
            long long x=makeCrct(arr,i);
            if(x==-1){
                fun=false;
                break;
            }
            out+=x;}
        if(fun)cout<<out<<'\n';
        else cout<<-1<<'\n';
    }
return 0;
}
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
        int num=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)num++;
        }
        int i;
        for(i=1;i<n;i++){
            int num1=0;
            for(int j=0;j<i;j++)if(arr[j]%2==0)num1++;
            if(num1*2==num){
                cout<<i<<'\n';
                break;
            }    
        }
        if(i==n)cout<<-1<<'\n';
    }
return 0;
}
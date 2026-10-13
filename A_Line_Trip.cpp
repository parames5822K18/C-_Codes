#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio();
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        vector <int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector <int> d(n+1);
        d[0]=a[0];
        int max=d[0];
        for(int i=1;i<n;i++){
            d[i]=a[i]-a[i-1];
            if(max<d[i])max=d[i];
        }
            d[n]=2*(x-a[n-1]);
            if(max<d[n])max=d[n];
        cout<<max<<'\n';
    }
return 0;
}
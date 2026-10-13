#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        long long a=sqrt(n);
        long long b=cbrt(n);
        long long c=pow(n,1.0/6.0);
        cout<<a+b-c<<'\n';
    }
}
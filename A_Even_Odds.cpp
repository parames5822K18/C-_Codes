#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k,i=0,z=1;
    cin>>n>>k;
    long long out;
        if(k<=(n+1)/2)out=2*k-1;
        else out=2*(k-(n+1)/2);
    cout<<out;
}
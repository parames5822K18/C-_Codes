#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b,int c,int d){
    if(d<b)return -1;
    a+=(d-b);
    int out=d-b;
    b=d;
    if(a<c)return -1;
    return (a-c)+out;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<solve(a,b,c,d)<<'\n';
    }
return 0;
}
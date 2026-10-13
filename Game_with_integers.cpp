#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%3==0)cout<<"Second"<<'\n';
        else cout<<"First"<<'\n';
    }
}
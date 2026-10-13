#include<bits/stdc++.h>
using namespace std;
bool solve(int a,int b,int c){
    if(a==b){
        return (c%2)?true:false;
    }
    else{
        return (a>b)?true:false;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(solve(a,b,c)){
            cout<<"First"<<'\n';
        }
        else cout<<"Second"<<'\n';
    }
return 0;
}
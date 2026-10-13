#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    int out=0;
    while(n!=1){
        if(n%6==0){
            n/=6;
            out++;
        }
        else if(n%3==0){
            n*=2;
            n/=6;
            out+=2;
        }
        else{
            return -1;
        }
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
        int n;
        cin>>n;
        cout<<solve(n)<<'\n';
    }
return 0;
}
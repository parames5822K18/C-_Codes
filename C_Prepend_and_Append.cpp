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
        string s;
        cin>>s;
        int i;
        for(i=0;i<n/2;i++){
            if(s.at(i)==s.at(n-i-1))break;
        }
        cout<<(n-2*i)<<'\n';
    }
return 0;
}
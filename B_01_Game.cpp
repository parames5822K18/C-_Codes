#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int N_0=0;
        for(int i=0;i<s.size();i++){
            if(s.at(i)=='0')N_0++;
        }
        int ans=(N_0>s.size()-N_0)?(s.size()-N_0):N_0;
        if(ans%2==0)cout<<"NET"<<'\n';
        else cout<<"DA"<<'\n';
    }
return 0;
}
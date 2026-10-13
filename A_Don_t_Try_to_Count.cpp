#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        int l1,l2;
        cin>>l1>>l2;
        cin>>s1>>s2;
        int ans=0;
        while(s1.find(s2)==string::npos && s1.size()<2*l2){
            s1+=s1;
            ans++;  
        }
        if(s1.find(s2)==string::npos){
            s1+=s1;
            ans++;
        }
        if(s1.find(s2)==string::npos)cout<<-1<<'\n';
        else cout<<ans<<'\n';
    }
return 0;
}
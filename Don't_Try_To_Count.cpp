#include<bits/stdc++.h>
using namespace std;
bool subString(string x,string s){
    if(s.length()>x.length())return false;
    for(int i=0;i<x.length();i++){
        if(x[i]==s[0]){
            int j;
            for(j=0;j<s.length();j++){
                if(x[i+j]!=s[j])break;
            }
            if(j==s.length())return true;
        }
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;

    }
    cout<<subString("aaa","aa");
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        int x=0;
        for(int i=0;i<len-1;i++){
        for(int j=0;j<i-1;j++){
            if(s[i]==s[j] && s[i+1]==s[j+1])x=1;
        }
        }
    (x)?cout<<"YES\n":cout<<"NO\n";  
    }
}
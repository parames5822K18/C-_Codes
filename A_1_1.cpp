#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int x1=0,x2=0;
        for(int i=1;i<n-1;i++){
            if(s[i-1]=='1' && s[i+1]=='1')s[i]='1';
        }
        for(int i=0;i<n;i++)if(s[i]=='1')x1++;
        for(int i=1;i<n-1;i++){
            if(s[i-1]=='1' && s[i+1]=='1')s[i]='0';
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1')x2++;
        }
        cout<<x2<<' '<<x1<<endl;
    }
}
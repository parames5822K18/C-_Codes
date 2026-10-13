#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int out=0;
        bool x=true;
        for(int i=0;i<n;i++){
            if(x){if(s[i]=='#')continue;
            int j;
            for(j=i;j<n;j++){
                if(s[j]=='#')break;
            }
            j=j-i;
            if(j>1){
                if(j>=3)x=false;
                out+=2;}
            
            else if(j==1)out++;
            i=i+j;}
        }
        cout<<out<<'\n';
    }
return 0;
}
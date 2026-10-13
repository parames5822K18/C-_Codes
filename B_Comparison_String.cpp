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
        int out=1;
        for(int i=0;i<n;i++){
            int cnt=1;
            for(int j=i;j<n;j++){
                if(s[j]==s[i])cnt++;
                else break;
            }
            out=max(cnt,out);
        }
        cout<<out+1<<'\n';
    }
return 0;
}
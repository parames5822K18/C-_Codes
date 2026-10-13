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
        int i,j;
        int n=s.size();
        for(i=0;i<n;i++)if(s.at(i)=='0')break;
        for(j=0;j<n;j++)if(s.at(j)=='1')break;
        for(int k=0;k<n;k++){
            if(k==i || k==j)continue;
            else cout<<s.at(k);
        }
        cout<<'\n';
    }
return 0;
}
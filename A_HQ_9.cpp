#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    long long n=str.length();
    for(long long i=0;i<n;i++){
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
            cout<<"YES";
            break;
        }
        if(i==n-1)cout<<"NO";
    }
}
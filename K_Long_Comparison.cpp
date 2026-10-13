#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long x,p,y,q;
        cin>>x>>p>>y>>q;
        string s,s1;
        s=to_string(x);
        for(int j=0;j<p;j++)s=s+'0';
        s1=to_string(y);
        for(int j=0;j<q;j++)s1=s1+'0';
        if(s.size()>s1.size())cout<<">\n";
        else if(s.size()<s1.size())cout<<"<\n";
        else{
            if(s[0]>s1[0])cout<<">\n";
            else if(s[0]<s1[0])cout<<"<\n";
            else cout<<"=\n";
        }
    }
}
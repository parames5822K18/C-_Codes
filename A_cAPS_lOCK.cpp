#include<bits/stdc++.h>
using namespace  std;
int main(){
     string s;
     cin>>s;
     int l=0,x=0,z;
     while(l<s.length()){
        if(s[l++]<='Z' && s[l++]>='A')x++;
     }
     if(x==(s.length())){
        l=1;
        while(l<s.length())s[l++]+=32;
     }
     else if((s[0]<='z' && s[0]>='a')&&(x==s.length()-1)){
        s[0]-=32;
        l=1;
        while(l<s.length())s[l++]+=32;
     }
     else z=2;
     cout<<s;
}
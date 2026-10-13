#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     long z=0;
     cin>>s;
     long i=0,x=0;
     while(i<s.length()){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&i<s.length()-2){
            if(z&&(!x)){cout<<' ';
            x++;}
            i+=3;}
        else{
            cout<<s[i++];
            z++;
            x=0;
        }
     }
}
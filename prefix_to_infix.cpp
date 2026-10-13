#include<bits/stdc++.h>
using namespace  std;
stack <string> st;
string fun(string s){
    for(int i=s.length()-1;i>=0;i--){
        char ch=s[i];
        if(isalnum(ch)||isalpha(ch)){
            st.push(string(1,ch));
        }
        else{
            string ch1=st.top();
            st.pop();
            string ch2=st.top();
            st.pop();
            st.push(ch1+ch+ch2);
        }
    }
return st.top();
}
int main(){
    string s;
    cin>>s;
    cout<<fun(s);      
return 0;
}
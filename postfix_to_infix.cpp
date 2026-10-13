#include<bits/stdc++.h>
using namespace  std;
stack <string> st;
string fun(string s){
    for(auto ch:s){
        if(isalnum(ch)||isalpha(ch)){
            st.push(string(1,ch));
        }
        else{
            string ch1=st.top();
            st.pop();
            string ch2=st.top();
            st.pop();
            st.push(ch2+ch+ch1);
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
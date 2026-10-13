#include<bits/stdc++.h>
using namespace  std;
stack <int> st;
int fun(string s){
    for(char ch:s){
        if(isalnum(ch)){
            st.push(ch-'0');
        }
        else{
            int x=st.top();
            st.pop();
            int y=st.top();
            st.pop();
            if(ch=='^')st.push(pow(x,y));
            if(ch=='+')st.push(x+y);
            if(ch=='-')st.push(y-x);
            if(ch=='/')st.push(y/x);
            if(ch=='*')st.push(x*y);
        }
    }
return st.top();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    cout<<fun(s);
return 0;
}
#include<bits/stdc++.h>
using namespace std;
stack <char> st;
int pre_ord(char c){
    if(c=='^')return 3;
    if(c=='*'||c=='/')return 2;
    if(c=='+'||c=='-')return 1;
return -1;
}
bool Left_ass(char ch){
    if(ch=='^')return false;
    else return true;
}
stack <char> str;
void fun(string s){
    for(int i=s.length()-1;i>=0;i--){
        char ch=s.at(i);
        if(isalpha(ch)||isalnum(ch))str.push(ch);
        else if(ch==')')st.push(ch);
        else if(ch=='('){
            while(!st.empty() && st.top()!=')'){
                str.push(st.top());
                st.pop();
            }
            if(!st.empty())st.pop();
        }
        else{
            while(!st.empty()&&st.top()!=')' && (pre_ord(st.top())>pre_ord(ch)||(pre_ord(st.top())==pre_ord(ch)&&!Left_ass(ch)))){
                str.push(st.top());
                st.pop();
            }
            st.push(ch);
        }

    }
    while(!st.empty()){
        str.push(st.top());
        st.pop();
    }
    str.push('\n');
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    fun(s);
    while(!str.empty()){
        cout<<str.top();
        str.pop();
    }
return 0;
}
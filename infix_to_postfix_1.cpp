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
void fun(string s){
    for(char ch:s){
        if(isalpha(ch)||isalnum(ch))cout<<ch;
        else if(ch=='(')st.push(ch);
        else if(ch==')'){
            while(!st.empty() && st.top()!='('){
                cout<<st.top();
                st.pop();
            }
            if(!st.empty())st.pop();
        }
        else{
            while(!st.empty()&&st.top()!='(' && (pre_ord(st.top())>pre_ord(ch)||(pre_ord(st.top())==pre_ord(ch)&&Left_ass(ch)))){
                cout<<st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
}
int main(){
         string s;
         cout<<"Enter Infix Expression:";
         cin>>s;
         fun(s);
return 0;
}
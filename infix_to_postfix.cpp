#include<bits/stdc++.h>
#include<stack>
using namespace  std;
stack <char> st;
int precedence_order(char ch){
    if(ch=='^')return 3;
    if(ch=='*' || ch=='/')return 2;
    if(ch=='+' || ch=='-')return 1;
return -1;
}
void in_post(string s){
         for(auto ch:s){
            if(isalnum(ch) || isalpha(ch))cout<<ch;
            else if(ch=='(')st.push(ch);
            else if(ch==')'){
                while(st.top()!='('){
                    cout<<st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && precedence_order(st.top())>=precedence_order(ch)){
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
}
int main(){
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        string str;
        cin>>str;
        in_post(str);
return 0;
}
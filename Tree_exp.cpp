#include<bits/stdc++.h>
using namespace  std;
stack <string> st;
bool left_ass(char ch){
    return (ch!='^');
}
stack <char> sym;
int pre_ord(char ch){
    if(ch=='^')return 3;
    if(ch=='*'||ch=='/')return 2;
    if(ch=='+'||ch=='-')return 1;
return -1;
}
void Bin_Tree(string s){
     int Least_pre_found=-1;
     char ch;
    for(int i=s.length()-1;i>=0;i--){
        ch=s[i];
        if(ch=='+'||ch=='-'){
           Least_pre_found=i;
           break;
        }
    }
    if(Least_pre_found==-1)for(int i=s.length()-1;i>=0;i--){
        ch=s[i];
        if(ch=='*'||ch=='/'){
           Least_pre_found=i;
           break;
        }
    }
    if(Least_pre_found==-1)for(int i=0;i<s.length();i++){
        ch=s[i];
        if(ch=='^'){
           Least_pre_found=i;
           break;
        }
    }
    if(Least_pre_found==-1){//When we get Single Character 
        st.push(s);
        return;
    }
    else{
        Bin_Tree(s.substr(0,Least_pre_found));
        Bin_Tree(s.substr(Least_pre_found+1));
    }
    string r=st.top();
    st.pop();
    string l=st.top();
    st.pop();
    st.push("("+l+ch+r+")");
return;
}
void printing(){
    while(!st.empty()){
        int j=1;
        for(int i=0;i<j;i++){
            cout<<st.top()<<'\t';
            st.pop();
        }
        j=j*2;
        cout<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    Bin_Tree(s);
    printing();
return 0;
}
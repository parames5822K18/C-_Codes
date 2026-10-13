#include<bits/stdc++.h>
using namespace std;
class Solution {
bool fun(string s,int low,int high){
    if(low>high)return true;
    else{
        if(s[low]!=s[high])return false;
        else return fun(s,low+1,high-1);
    }
}
public:
    bool isPalindrome(const string &s) {
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]>='Z')s[i]+=('a'-'A');
            else if(s[i]<='a' || s[i]>='z'){
                s.erase(i,1);
                i--;
                }
        }
        if(s.empty())return true;
        else{
            if(fun(s,0,s.length()-1))return true;
            else return false;
        }
    }
};
int main(){
    string s;
    cin>>s;
    Solution param;
    param.isPalindrome(s)<<'\n';
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    unsigned int str_len=s.length();
    for(int i=0;i<str_len-6;i++){
        if(str_len<7){
            cout<<"NO";
            return 0;
        }
        if(s.at(i)=='0'){
            int count=0;
            for(int j=i;j<i+7;j++){
                if(s.at(j)=='0')count++;
            }
            if(count==7){
                cout<<"YES";
                return 0;
            }
        }
        else if(s.at(i)=='1'){
            int count=0;
            for(int j=i;j<i+7;j++){
                if(s.at(j)=='1')count++;
            }
            if(count==7){
                cout<<"YES";
                return 0;
            }
        }       
    }
     cout<<"NO";
            return 0;
}
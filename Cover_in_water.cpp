#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int siz;
        string s;
        cin>>siz;
        cin>>s;
        int i=0,prev=-1;
        int out=0;
        bool three=false;
        for(int i=0;i<siz;i++){
            if(s.at(i)=='#'){
                if((i-prev-1)>2)three=true;
                else out+=(i-prev-1);
                prev=i;
            }
            if(i==siz-1){
                if((siz-prev-1)>2)three=true;
                else out+=(siz-prev-1);
            }
            
        }
        if(!three)cout<<out<<'\n';
        else cout<<2<<'\n';
    }

}
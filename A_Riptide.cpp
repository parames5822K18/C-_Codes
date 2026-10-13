#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int num=0;
        while((a!=b) && (b!=c)&& (c!=a)){
            num++;
            if(a>b && a>c){
                a--;
                if(b>c)c++;
                else b++;
            }
            if(b>a && b>c){
                b--;
                if(a>c)c++;
                else a++;
            }
            if(c>b && c>a){
                c--;
                if(b>a)a++;
                else b++;
            }
        }
        cout<<num<<'\n';
    }
return 0;
}
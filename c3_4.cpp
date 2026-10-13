#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a1,a2,b1,b2;
        cin>>a1>>b1>>a2>>b2;
        long long x=a1*b1+a2*b2;
        long long y=sqrt(a1*b1+a2*b2);
        if(y*y==x){
            if((a1==a2)&&(b1+b2==y)){
                cout<<"YES\n";
                continue;
            }
            if((a2==b1)&&(a1+b2==y)){
                cout<<"YES\n";
                continue;
            }
            if((a1==b2)&&(b1+a2==y)){
                cout<<"YES\n";
                continue;
            }
            if((b2==b1)&&(a1+a2==y)){
                cout<<"YES\n";
                continue;
            }
            cout<<"NO\n";
        }
        else cout<<"NO\n";

    }

}
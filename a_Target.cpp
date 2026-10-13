#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a[10];
        for(int i=0;i<10;i++)cin>>a[i];
        int out=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(a[i][j]=='X'){
                    if(i==0 ||i==9 || j==0 || j==9)out+=1;
                    else if(i==1 ||i==8 || j==1 || j==8)out+=2;
                    else if(i==2 ||i==7 || j==2 || j==7)out+=3;
                    else if(i==3 ||i==6 || j==3 || j==6)out+=4;
                    else out+=5;
                }
            }
        }
        cout<<out<<'\n';
    }
return 0;
}
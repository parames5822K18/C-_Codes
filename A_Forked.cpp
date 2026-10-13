#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xK,yK;
        cin>>xK>>yK;
        int xQ,yQ;
        cin>>xQ>>yQ;
        int out=0;
        if(a!=b){vector <pair <int,int>> ab(8);
        ab[0]={a,b};
        ab[1]={a,-b};
        ab[2]={-a,b};
        ab[3]={-a,-b};
        ab[4]={b,a};
        ab[5]={b,-a};
        ab[6]={-b,a};
        ab[7]={-b,-a};
        for(int i=0;i<8;i++){
            int x1=xK+ab[i].first;
            int y1=yK+ab[i].second;
            for(int j=0;j<8;j++){
                int x2=xQ+ab[j].first;
                int y2=yQ+ab[j].second;
                if(x1==x2 && y1==y2){
                    out++;
                    break;
                }
            }  
        }}
        else{
            vector <pair <int,int>> ab(4);
            ab[0]={a,b};
            ab[1]={a,-b};
            ab[2]={-a,b};
            ab[3]={-a,-b};
            for(int i=0;i<4;i++){
            int x1=xK+ab[i].first;
            int y1=yK+ab[i].second;
            for(int j=0;j<4;j++){
                int x2=xQ+ab[j].first;
                int y2=yQ+ab[j].second;
                if(x1==x2 && y1==y2){
                    out++;
                    break;
                }
            }  
        }
        }
        cout<<out<<'\n';
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<4 || n%2)cout<<-1<<'\n';
        else {
             if(n%4==0 && n%6==0){
                cout<<n/6<<' '<<n/4<<'\n';
             }
             else if(n%4==0 && n%6!=0){
                long long min1=0;
                if(n%6==2){
                    min1=(n-8)/6+2;
                }
                else if(n%6==4){
                    min1=(n-4)/6+1;
                }
                cout<<min1<<' '<<n/4<<'\n';
             }
             else if(n%4!=0 && n%6==0){
                long long max1=0;
                max1=(n-6)/4+1;
                cout<<n/6<<' '<<max1<<'\n';
             }
             else{
                if(n%12==2){
                    cout<<(n-8)/6+2<<' '<<(n-6)/4+1<<'\n';
                }
                else if(n%12==10){
                    cout<<(n-4)/6+1<<' '<<(n-6)/4+1<<'\n';
                }
                else cout<<-1<<'\n';
             }
        }
    }
return 0;
}
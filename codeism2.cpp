#include<bits/stdc++.h>
using namespace std;
int fin(int n){
    if(n==1||n==0)return 1;
    return fin(n-1)+fin(n-2);
}
string series(int n){
    if(n<=0)return "1";
    return series(n-1)+"+"+to_string(fin(n));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<series(8);
return 0;
}
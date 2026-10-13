#include<bits/stdc++.h>
using namespace std;
void solve(int x,int k){
    int min=INT_MAX;
    int j;
    for(int i=1;i<=x;i++){
        if(i%k==0)continue;
        else {
            int num=(x/i)+1;
            min=(min<num)?min:num;
            j=i;
        }
    }
    if(x%j){
        cout<<min<<'\n';
        for(int i=0;i<(x/j);++i)cout<<j<<' ';
        cout<<(x%j)<<'\n';
    }
    else{
        min--;
        cout<<min<<'\n';
        for(int i=0;i<(x/j);++i)cout<<j<<' ';
        cout<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        solve(x,k);
    }
return 0;
}
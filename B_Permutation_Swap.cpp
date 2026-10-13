#include<bits/stdc++.h>
using namespace std;
int HCF(int n1,int n2){
    if(n1<n2){
        n1^=n2;
        n2^=n1;
        n1^=n2;
    }
    if(n2==0)return n1;
    return HCF(n2,n1%n2);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> a(n);
        vector <int> p(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            p[a[i]-1]=abs(i-a[i]+1);
        }
        int out=p[0];
        for(int i=1;i<n;i++){
            out=HCF(out,p[i]);
        }
        cout<<out<<'\n';
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long  t;
    cin>>t;
    for(long i=0;i<t;i++){
        long long n;
        cin>>n;
        vector <long long> p;
        for(long long j=0;j<n;j++){
            long long temp;
            cin>>temp;
            p.push_back(temp);
            //p1.push_back(temp);
        }
        vector <long long> p1=p;
        //for(long long j=0;j<n;j++)cout<<p.at(j)<<' ';
        //cout<<'\n';
        for(long long l=0;l<n;l++){
        for(long long r=l;r<n;r++){
            if(p.at(r)>p.at(l)){
                swap(p[r],p[l]);
            }
            
            }
        }
        for(long long j=0;j<n;j++)cout<<p[j]<<' ';
        cout<<'\n';
    }
    
}

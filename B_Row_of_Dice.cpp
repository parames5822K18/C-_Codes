#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector <int> suffmax(n);
    suffmax[n-1]=n-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<=arr[suffmax[i+1]]){
            suffmax[i]=i+1;
        }
        else suffmax[i]=suffmax[i+1];
    }
    suffmax[n-1]++;
    vector <double> expect(n);
    for(int i=0;i<n;i++){
        expect[i]=(suffmax[i]+1)/2.0;
    }
    double expected=0;
    int i=0;
    double com=1.0;
    while(i<n){
        if(arr[i]<expect[i])i=suffmax[i];
        else{
            expected+=com*(arr[i]-int(expect[i])+1)*(arr[i]+int(expect[i]))/2.0;
            com*=(int(expect[i]))/double(arr[i]);
        }
    }
    cout<<expected<<setprecision(6)<<'\n';
}
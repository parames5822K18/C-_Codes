#include<bits/stdc++.h>
using namespace std;
int cf=1;
void radixSort(vector <int> arr,int n,int max){
    if((max/cf)==0)return;
    int k=0;
    vector <int> temp(n);
    for(int i=0;i<=9;i++){
        for(int j=0;j<n;j++){
            if(((arr[j]/cf)%10)==i)temp[k++]=arr[j];
        }
    }
    cf*=10;
    for(int i=0;i<n;i++)arr[i]=temp[i];
    radixSort(arr,n,max);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long c,k;
        cin>>n;
        cin>>c>>k;
        vector <int> arr(n);
        int max=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            max=(max<arr[i])?arr[i]:max;
         }
        radixSort(arr,n,max);
        long long output=c;
        if(n==1){
            if(arr[0]>c)cout<<c<<endl;
            else if(arr[0]+k>c)cout<<2*c<<endl;
            else cout<<c+k<<endl; 
        }
        else{
            for(int i=0;i<n-1;i++){
                if(arr[i]>c)break;
                else if(arr[i]+k>c){
                    k-=c;
                    output*=2;
                 }
                else{
                    output+=k;
                    k=0;
                }
            }
            if(arr[n-1]<c){
                if(arr[n-1]+k>c)output*=2;
                else output+=k;
            }
            cout<<output<<endl;
        }

    }
}
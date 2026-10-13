#include<bits/stdc++.h>
using namespace std;
int main(){
    
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int arr[7];
        int max=0;
        for(int i=0;i<7;i++){
            cin>>arr[i];
            if(arr[i]>arr[max])max=i;
        }
        int sum=0;
        for(int i=0;i<7;i++)sum-=arr[i];
        sum+=2*arr[max];
        cout<<sum<<endl;
    }
    
}
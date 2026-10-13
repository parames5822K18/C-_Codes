#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[3*n];
        for(int i=0;i<n;i++){
            if(i%3==0){
                arr[i]=i/3+1;
            }
            else if(i%3==1){
                arr[i]=n+2*(i/3)+1;
            }
            else arr[i]=arr[i]=n+2*(i/3)+2;
        }
        for(int i=0;i<3*n;i++)cout<<arr[i]<<' ';
        cout<<endl;
    }
}
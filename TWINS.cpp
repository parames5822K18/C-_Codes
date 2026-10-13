#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr;
    int sum=0;
    for(int i=0;i<n;i++){int temp;
                         cin>>temp;
                         arr.push_back(temp);
                         sum+=arr[i];
                        }
    sort(arr.begin(),arr.end());
    int k=0;
    for(int i=1;i<=n;i++){
        int sum1=0;
    for(int j=n-1;j>n-1-i;j--){
          sum1+=arr[j];
    }
    if(2*sum1>sum){
        k=i;
        break;}
    }
    cout<<k;
}
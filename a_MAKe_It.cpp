#include<bits/stdc++.h>
using namespace std;
int parition(int arr[],int low,int high){
    int i=low-1;
    int pivot=arr[high];
    for(int j=low;j<high;j++){
        if(arr[j]>pivot ){
            i++;
            if(i!=j){arr[i]^=arr[j];
            arr[j]^=arr[i];
            arr[i]^=arr[j];}
        }
    }
    if(i+1!=high){ arr[i+1]^=arr[high];
    arr[high]^=arr[i+1];
    arr[i+1]^=arr[high];}
    return i+1;
}
void QuickSort(int arr[],int low,int high){
    if(low<high){
        int pivot=parition(arr,low,high);
        QuickSort(arr,low,pivot-1);
        QuickSort(arr,pivot+1,high);
    }
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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        QuickSort(arr,0,n-1);
        int max=arr[0];
        int i;
        for(i=0;i<n;i++){
            if(max!=arr[i])break;
        }
        if(i<n){arr[0]^=arr[i];
        arr[i]^=arr[0];
        arr[0]^=arr[i];
        cout<<"YES"<<'\n';
        for(int i=0;i<n;i++)cout<<arr[i]<<' ';
        cout<<'\n';}
        else cout<<"NO"<<'\n';
    }
return 0;
}
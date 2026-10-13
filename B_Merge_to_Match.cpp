#include<bits/stdc++.h>
using namespace std;
int parition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;++j){
        if(arr[j]<pivot){
            i++;
            arr[i]=arr[i]+arr[j];
            arr[j]=arr[i]-arr[j];
            arr[i]=arr[i]-arr[j];
        }
    }
    arr[i+1]=arr[i+1]+arr[high];
    arr[high]=arr[i+1]-arr[high];
    arr[i+1]=arr[i+1]-arr[high];
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
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b[m];
        for(int i=0;i<m;i++)cin>>b[i];
        QuickSort(a,0,n-1);
        QuickSort(b,0,m-1);
        bool fun=true;
        pair<int,int> x[m];
        for(int i=0;i<m;i++){
            x[i].first=0;
            x[i].second=0;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[j]>b[i]){
                    x[i].first=j;
                    break;
                }
            }
            for(int j=n-1;j>=0;j--){
                if(a[j]<b[i]){
                    x[i].second=n-j;
                    break;
                }
            }
            if(x[i].first<i && x[i].second<n-i-1){
                fun=false;
                break;
            }
        }
        if(fun)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector <int> &arr,int low,int high,int target){
    int mid=(low+high)/2;
    if(low>high)return -1;
    if(arr[mid]==target)return mid;
    else if(arr[mid]<target)return binarySearch(arr,mid+1,high,target);
    else return binarySearch(arr,low,mid-1,target);
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    int target;
    cin>>target;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<binarySearch(arr,0,n-1,target);
}
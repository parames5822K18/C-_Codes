#include<bits/stdc++.h>
using namespace std;
class Search{
    public:
    bool linearSearch(int arr[],int n,int val){
        if(*arr==val)return true;
        if(n==1)return false;
        else return linearSearch(arr+1,n-1,val);
    }
    bool BST(int arr[],int start,int end,int val){
    if(start>end)return false;
    int mid=(start+end)/2;
    if(val<arr[mid])BST(arr,start,mid,val);
    else if(val>arr[mid])BST(arr,mid+1,end,val);
    else return true;
    }
}searching;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<searching.linearSearch(arr,5,10);
}
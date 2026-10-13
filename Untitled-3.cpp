#include<bits/stdc++.h>
using namespace std;
void half_merge(long long arr[],long long start,long long mid,long long end){
       long long n1=mid-start+1;
       long long n2=end-mid;
       long long left[n1],right[n2];
       for(long long i=0;i<n1;i++)left[i]=arr[start+i];
       for(long long i=0;i<n2;i++)right[i]=arr[mid+i+1];
       long long i=0,j=0,k=start;
       while((i<n1)&&(j<n2)){
        if(left[i]<right[j]){
          arr[k++]=left[i++];
        }
        else arr[k++]=right[j++];
       }
       while(i<n1)arr[k++]=left[i++];
       while(j<n2)arr[k++]=right[j++];
}
void sort_half(long long arr[],long long start,long long end){
  long long mid=(start+end)/2;
  if(start==end)return;
  else{
    sort_half(arr,start,mid);
    sort_half(arr,mid+1,end);
    half_merge(arr,start,mid,end);
  }
}
void sort_arr(long long arr[],long long n){
      sort_half(arr,0,n-1);
}
int main(){
     long long num;
     cin>>num;
     long long a[num];
     for(long long i=0;i<num;i++)cin>>a[i];
     sort_arr(a,num);
     for(long long i=0;i<num;i++)cout<<a[i]<<' ';
}
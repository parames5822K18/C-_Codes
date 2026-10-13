#include<bits/stdc++.h>
using namespace std;
int main(){
       int size;
       cin>>size;
       vector <int> a(size);
       for(int i=0;i<size;i++)cin>>a[i];
       int area[size],area1[size];
       for(int i=0;i<size;i++){
        area1[i]=0;
        area[i]=0;
       }
       for(int i=1;i<size;i++){
        if(a[i-1]>=a[i]){
            area[i]+=area[i-1]+1;
            if(i>2 && a[i-2]>=a[i] && a[i-2]<a[i-1])area[i]+=(area[i-2]+1);
        }
       }
       for(int i=size-2;i>=0;i--){
        if(a[i+1]>=a[i]){
            area1[i]+=area1[i+1]+1;
            if(i<size-2 && a[i+2]>=a[i] && a[i+2]<a[i+1])area1[i]+=(area1[i+2]+1);
        }
       }
       cout<<"Left:\n";
       for(int i=0;i<size;i++)cout<<area[i]<<' ';
       cout<<"\nRight:\n";
       for(int i=0;i<size;i++)cout<<area1[i]<<' ';

}
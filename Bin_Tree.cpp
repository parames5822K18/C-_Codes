#include<bits/stdc++.h>
using namespace std;
struct element{
    int num;
    element* L;
    element* R;
}
element* head=NULL;
element*  fun(int arr[],int start,int end){
    if(head==NULL){
        head=new element();
        element* temp=head;
        int mid=(start+end+1)/2;
        temp->num=arr[mid];
    }
    else{
        temp->L=new element();
        temp->R=new element();
    }
    if(start==head)return temp;
}
int main(){
    ios::sync_with_stdio();
    cin.tie(NULL);
    int a[]={1,2,3,4,5,6,7,8,9};
    
return 0;
}
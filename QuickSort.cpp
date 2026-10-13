#include<iostream>
using namespace std;
void swaP(int *p1,int *p2){
        int p=*p1;
        *p1=*p2;
        *p2=p;
    return;
    }
int partition1(int arr[],int start,int end){
        int pivot=start;
        for(int i=start+1;i<=end;i++){
            if(arr[i]<arr[pivot]){
                  swaP(arr+i,arr+pivot);
                  pivot=i;
            }
        }
        for(int i=start+1;i<=end;i++){
            if(arr[i]>=arr[pivot]){
                swaP(arr+i,arr+pivot);
                pivot=i;
            }
        }
        return pivot;
}
void quickSort2(int arr[],int start,int end){
        if(end<=start)return;
        int pivot;
        pivot=partition1(arr,start,end);
        quickSort2(arr,start,pivot-1);
        quickSort2(arr,pivot+1,end);}
int main(){
        int arr[]={4,3,2,1,5};
        quickSort2(arr,0,4);
        for(int i=0;i<5;i++)cout<<arr[i];
    }
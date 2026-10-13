#include<bits/stdc++.h>
using namespace std;
class x{
    void swaP(int *p1,int *p2){
        int p=*p1;
        *p1=*p2;
        *p2=p;
    return;
    }
    int cf=1;
     public:
     void bubblesort(int arr[],int n){
        for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1])swaP(arr+j,arr+j+1);
        }
        }
     }
     void modifiedBubbleSort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            bool flag=true;
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swaP(arr+j,arr+j+1);
                    flag=false;
                }
                if(flag==true)break;
            }
        }
     }
     void insertionSort(int arr[],int n){
        for(int i=1;i<n;i++){
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
     }
     void selectionSort(int arr[],int n){
        for(int i=0;i<n;i++){
            int minindex=i;
            for(int j=i;j<n;j++){
                if(arr[minindex]>arr[j])swaP(arr+minindex,arr+j);
            }
        }
     }
     void quickSort1(int arr[],int start,int end){
        if(start>=end)return;
        int pivot=*(arr+start);
        int ar[end-start+1];
        int j=0,k=0,x=0;
        for(int i=start+1;i<=end;i++){
            if(arr[i]<pivot)ar[j++]=arr[i];
            else ar[end-start-k++]=arr[i];
        }
        ar[j]=pivot;
        for(int i=start;i<=end;i++)arr[i]=ar[x++];
        quickSort1(arr,start,start+j-1);
        quickSort1(arr,start+j+1,end);
     }
     void quickSort2(int arr[],int start,int end){
        int pivot;
        if(end>start){
        pivot=partition1(arr,start,end);
        quickSort2(arr,start,pivot-1);
        quickSort2(arr,pivot+1,end);}
     }
     int partition1(int arr[],int start,int end){
        int left=start,right=end;
        int pivot_value=arr[start];
        for(int i=start+1;i<=end;i++){
            if(arr[i]<pivot_value)left++;
            else{
                swaP(arr+i,arr+right);
                right--;
            }
        }
        swaP(arr+start,arr+right);
        return right;
     }
     void heapify(int arr[],int n,int i){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left <n && arr[left]>arr[largest])largest=left;
        if(right<n && arr[right]>arr[largest])largest=right;
        if(i!=largest){
            int temp=arr[i];
            arr[i]=arr[largest];
            arr[largest]=temp;
            heapify(arr,n,largest);
        }
     }
     void heapSort(int arr[],int n){
        for(int i=n/2-1;i>=0;i--){
            heapify(arr,n,i);
        }
        for(int i=n-1;i>0;i--){
            int temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
            heapify(arr,i,0);
        }
     }
     void RadixSort(int arr[],int n,int max){
     if(max/cf==0)return;
     int a[n],j=0;
     for(int x=0;x<=9;x++){
        for(int i=0;i<n;i++){
            if((arr[i]/cf)%10==x)a[j++]=arr[i];
        }
     }
     for(int i=0;i<n;i++)arr[i]=a[i];
     cf*=10;
     RadixSort(arr,n,max);
     }
     void merge(int arr[],int start,int mid,int end){
        int i=start;
        int j=mid+1;
        int k=0;
        int ar[end-start+1];
        while(i<=mid &&j<=end){
            if(arr[i]<arr[j]){
                ar[k]=arr[i++];
                k++;
            }
            else{
                ar[k]=arr[j++];
                k++;
            }
        }
        while(i<=mid){
            ar[k++]=arr[i++];
        }
        while(j<=end){
            ar[k++]=arr[j++];
        }
        for(int i=0;i<k;i++)arr[start+i]=ar[i];
     }
     void mergeSort(int arr[],int start,int end){
        if(start>=end)return;
        int mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
     }
     int max(int arr[],int n){
        int max=0;
        for(int i=0;i<n;i++)max==(arr[i]>max)?max:arr[i];
        return max;
     }
}sorting;
int main(){
    int arr[]={4,1,2,5,3};
    sorting.heapSort(arr,5);
    for(int i=0;i<5;i++)cout<<arr[i]<<' ';
}
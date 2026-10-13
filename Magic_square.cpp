#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5],k=0;
    int freq[5][5];
    for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        arr[i][j]=0;
        freq[i][j]=0;
    }
    }
    int i=0,j=2;
    while(k<25){
        arr[i][j]=++k;
        freq[i][j]++;
        int tempi=i;
        int tempj=j;
        i=((tempi-1)>=0)?tempi-1:tempi+4;
        j=((tempj-1)>=0)?tempj-1:tempj+4;
        if(freq[i][j]){
            i=tempi+1;
            j=tempj;
        }
    }
    for(i=0;i<5;i++){
    for(j=0;j<5;j++)cout<<arr[i][j]<<' ';
    cout<<'\n';
    }
}
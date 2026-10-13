#include<bits/stdc++.h>
#define MAX 5
using namespace std;
int rear=-1,front=-1,arr[MAX];
bool isempty=true;
int X[MAX];
void check(){
    for(int i=0;i<MAX;i++){
        if(X[i]){
            isempty=false;
            return;
        }
        else if(i==MAX-1){
            isempty=true;
            return;
        }
    }
}
void dequeue(){
     if(!isempty){
        X[front%MAX]=0;
        front=(front+1)%MAX;
        check();
     }
}
void enqueue(int x){
    if(isempty){
        rear++;
        front++;
        isempty=false;
        arr[rear]=x;
        X[rear]++;
    }
    else{
        for(int k=0;k<MAX;k++){
            if(X[(front+k)%MAX]==0){
                rear=(front+k)%MAX;
                arr[rear]=x;
                X[rear]++;
                return;
            }
            else if(k==MAX-1)cout<<"Queue is Completely Filled!!\n";
        }
    }
}
int main(){
    ios::sync_with_stdio();
    cin.tie(NULL);
    enqueue(1);
    enqueue(1);
    enqueue(1);
    enqueue(1);
    enqueue(1);
    dequeue();
    enqueue(1);
    enqueue(1);
return 0;
}
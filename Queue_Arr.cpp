//Linear Queue using Array which resets after making it empty
#include<bits/stdc++.h>
#define MAX 5
using namespace std;
int front(){
    return arr[front];
}
int rear()return arr[rear];
int arr[MAX];
int rear=-1,front=-1;
bool isempty=true;
bool nxt_overflow=false;
void dequeue(){
    if(!isempty){
        front++;
        if(front>rear){isempty=true;
                       rear=-1;
                       front=-1;
                    }
    }
    else{
        rear=-1;
        front=-1;
    }  
}
void enqueue(int x){
    if(!nxt_overflow){
        if(isempty){
            isempty=false;
            rear++;
            front++;
        }
        else{
            rear++;
        }
        arr[rear]=x;
        if(rear+1>=MAX)nxt_overflow=true;
    }
}
int main(){
    ios::sync_with_stdio();
    cin.tie(NULL);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    enqueue(5);
    enqueue(6);
    //enqueue(5);
    cout<<front<<rear;
    cout<<nxt_overflow;
    cout<<isempty;
return 0;
}
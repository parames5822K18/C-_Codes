#include<bits/stdc++.h>
using namespace std;
#define MAX 4
int size=0;
int curr=-1;
int front=-1;
int arr[MAX];
bool freq[MAX];
void insert(int v){
    if(curr==-1){curr=0;
                front=0;
            }
    else for(int i=0;i<MAX;i++){
        if(!freq[(curr+i)%MAX]){curr=(curr+i)%MAX;
                           break;
                        }
    }
    arr[curr]=v;
    freq[curr]=true;
    curr=(curr+1)%MAX;
return;
}
void remove(){
    for(int i=0;i<MAX;i++){
        if(freq[(front+i)%MAX]){front=(front+i)%MAX;
                           break;
                        }
    }
    freq[front]=false;
    front=(front+1)%MAX;
}
void Display(){
    cout<<"Passengers Waiting:\n";
    for(int i=0;i<MAX;i++)if(freq[i])cout<<arr[(front+i)%MAX]<<' ';
}
int main(){
    ios::sync_with_stdio();
    cin.tie(NULL);
    for(int i=0;i<MAX;i++)arr[i]=0;
    for(int i=0;i<MAX;i++)freq[i]=false;
    while(1){
        int p;
        cin>>p;
        switch(p){
            case 1:
            if(size<MAX){
                int val;
                cout<<"Enter passenger number: ";
                cin>>val;
                insert(val);
                size++;
            }
            else cout<<"Bus Stop is Full\n";
            break;
            case 2:
            if(size>0){
                remove();
                size--;
            }
            else cout<<"No passegner to board\n";
            break;
            case 3:
            Display();
            break;
            case 4:return 0;
        }
    }
return 0;
}
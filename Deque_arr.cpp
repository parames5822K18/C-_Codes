#include<bits/stdc++.h>
using namespace std;
vector <int> v;
int size=0;
int front=-1,rear=-1;
void Push_front(int x){
    if(v.empty()){
        front++;
        rear++;
        v.push_back(x);
        return;
    }
    v.push_back(x);
    for(int i=rear;i>=0;i--){
        v[i]=v[i+1]+v[i];
        v[i+1]=v[i]-v[i+1];
        v[i]=v[i]-v[i+1];
    }
    rear++;
    size++;
}
void Push_back(int x){
    if(v.empty())Push_front(x);
    else{
        v.push_back(x);
        rear++;
    }
    size++;
}
void Pop_front(){
    size--;
    front++;
}
void Pop_back(){
    size--;
    rear--;
}
bool isempty(){return (size==0);}
void Display(){
    cout<<"Deque Elements: \n";
   for(auto x:v){
    cout<<x<<' ';
   }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Push_front(1);
    Push_front(2);
    Push_front(3);
    Push_front(4);
    Push_back(4+1);
    Display();
return 0;
}
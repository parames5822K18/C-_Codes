#include<bits/stdc++.h>
using namespace std;
queue <int> q;
void Push(int x){
    vector <int> v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    q.push(x);
    for(auto y:v){
        q.push(y);
    }
}
void Pop(){
    q.pop();
}
int main(){
    ios::sync_with_stdio();
    cin.tie(NULL);
    Push(1);
    Push(2);
    Push(3);
    Push(4);
    while(!q.empty()){cout<<q.front();
    Pop();}
return 0;
}
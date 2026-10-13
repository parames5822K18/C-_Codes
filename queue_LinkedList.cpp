#include<bits/stdc++.h>
using namespace std;
list <int> st;
void enqueue(int x){
    st.push_back(x);
return;
}
void dequeue(){
    if(!st.empty()){st.pop_front();}
    else cout<<"Queue is Empty!!\n";
return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    enqueue(1);
    dequeue();
    dequeue();
return 0;
}
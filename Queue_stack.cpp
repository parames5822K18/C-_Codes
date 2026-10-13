#include<bits/stdc++.h>
using namespace std;
stack <int> st;
void Enqueue(int x){
    stack <int> s;
    while(!st.empty()){
        s.push(st.top());
        st.pop();
    }
    st.push(x);
    while(!s.empty()){
        st.push(s.top());
        s.pop();
    }
}
int Front(){
    return st.top();
}
void Dequeue(){
    st.pop();
}
int main(){
      Enqueue(1);
      Enqueue(2);
      cout<<st.top();
      st.pop();
      cout<<st.top();
      st.pop();
}
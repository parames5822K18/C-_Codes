#include<bits/stdc++.h>
#include<forward_list>
using namespace std;
forward_list <int> fl;
void Dequeue(){
    if(fl.empty){
        cout<<"Queue is Empty!!\n";
        return;
    }
    fl.pop();
}
void Enqueue(int val){
    fl.push(val);
}
int main(){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
return 0;
}
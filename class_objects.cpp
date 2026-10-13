#include<bits/stdc++.h>
using namespace std;
class account{
    public:
    int a;
    string s;
    void display(int a,string s){
        cout<<s<<"\'s age :"<<a;
    }

};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    account paramesh;
    paramesh.a=17;
    paramesh.s="SOMULA PARAMESWAR REDDY";
    paramesh.display(17,"param");
}
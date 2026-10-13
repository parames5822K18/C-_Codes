#include<bits/stdc++.h>
using namespace std;
class BinaryTree{
    private:
    int v[100];
    int size=0;
    int x=0,y=1,z=0;
    public:
    void Insert(int value){
        v[2*x+z]=value;
        z++;
        if(z>=y){
            z=0;
            y*=2;
            x++;
        }
    }

};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
return 0;
}
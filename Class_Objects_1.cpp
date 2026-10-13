#include<iostream>
using namespace std;
class my_class{
    private:
    int  x;
    int y;
    //Constructor
    public:
    my_class(int v1,int v2){
        x=v1;
        y=v2;
    }
    //Destructor
    ~my_class(){
        cout<<"Destructor Cleaning UP!! "<<x<<' '<<y;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    my_class* me=new my_class(1,2);
    delete me;
return 0;
}
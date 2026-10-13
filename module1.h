#ifndef _PARAM
#define _PARAM
#include<iostream>
#include<string>
using namespace std;
class Instructor{
    public:
    string s;
    int Age;
    void Intro(){
        cout<<"Hi!!\nThis is "<<s<<"I'm "<<Age<<" old";
    }
};
#endif

#include<bits/stdc++.h>
using namespace std;
int k=0;
string start="BEGIN_SNIPPET";
string end="END_SNIPPET";
string fun(){
	string int_opt;
	cin>>int_opt;
	ofstream file("file.cpp");
	while(int_opt!=end){
		file<<int_opt;
		cin>>int_opt;
	}
	file.close();
}
int main(){
	string ext_opt=start;
	do{
		cin>>ext_opt;
		fun();
		k++;
	}while(k<10 && ext_opt==start);
}
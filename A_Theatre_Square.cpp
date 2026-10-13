#include<bits/stdc++.h>
using namespace std;
int main(){
      long long n,m,a;
      cin>>n>>m>>a;
      long long output=0;
      long long y=(n%a!=0)?((n/a)+1):(n/a);
      long long x=(m%a!=0)?((m/a)+1):(m/a);
      output=y*x;
      cout<<output;
}

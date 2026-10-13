#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long reverse(int x) {
        long long y=1;
        int cnt=0;
        while(x/y){
            cnt++;
            y*=10;
        }
        y/=10;
        long long out=0;
        while(x){
            out+=(x%10)*y;
            y/=10;
            x/=10;
        }
        return out;
    }
};
int main(){
    Solution x;
    cout<<x.reverse(1534236469);
}
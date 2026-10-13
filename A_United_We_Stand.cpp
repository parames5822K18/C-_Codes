#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            min=(min<arr[i])?min:arr[i];
        }
        vector <int> c;
        vector <int> b;
        for(int i=0;i<n;i++){
            if(arr[i]==min)b.push_back(arr[i]);
            else c.push_back(arr[i]);
        }
        if(!c.empty()){
            cout<<b.size()<<' '<<c.size()<<'\n';
            for(auto i:b)cout<<i<<' ';
            cout<<'\n';
            for(auto i:c)cout<<i<<' ';
            cout<<'\n';
        }
        else cout<<-1<<'\n';

    }
return 0;
}
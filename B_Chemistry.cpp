#include<bits/stdc++.h>
using namespace std;
bool solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int freq[26];
    for(int i=0;i<26;i++)freq[i]=0;
    for(int i=0;i<n;i++)freq[s.at(i)-'a']++;
    int N_odd=0;
    for(int i=0;i<26;i++)if(freq[i]%2!=0)N_odd++;
    return N_odd <= k + 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
return 0;
}
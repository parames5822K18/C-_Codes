#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int base=1;
        for(int i = 1; i < n; i++)
            if (s[i] != s[i - 1])
                base++;
        int ans=base;
        for (int i=1;i<n-1;i++) {
            int temp=base;
            if (s[i]!=s[i-1] && s[i]!=s[i+1]) {
                if(s[i-1]==s[i+1])
                    temp-=2;
                else
                    temp-=1;
            }
            ans=min(ans,temp);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
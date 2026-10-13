#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0, left = 0, ans = n + 1;

    for(int right = 0; right < n; right++){
        sum += a[right];

        while(sum > s){
            sum -= a[left];
            left++;
        }

        if(sum == s){
            ans = min(ans, n - (right - left + 1));
        }
    }

    cout << (ans == n + 1 ? -1 : ans) << '\n';
}

int main(){
    fast
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
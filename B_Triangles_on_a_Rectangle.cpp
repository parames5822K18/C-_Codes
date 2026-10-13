#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define tc long long t; cin>>t; while(t--)
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
using ll = long long;
using vi = vector<int>;
int main(){
    fast
    tc{
        int w,h;
        cin >> w >> h;
        int k1;
        cin >> k1;
        vi x1(k1);
        FOR(i,0,k1) cin >> x1[i];
        int k2;
        cin >> k2;
        vi x2(k2);
        FOR(i,0,k2) cin >> x2[i];
        int k3;
        cin >> k3;
        vi y1(k3);
        FOR(i,0,k3) cin >> y1[i];
        int k4;
        cin >> k4;
        vi y2(k4);
        FOR(i,0,k4) cin >> y2[i];
        ll x_base = max(
            (ll)(x1[k1-1] - x1[0]) * h,
            (ll)(x2[k2-1] - x2[0]) * h
        );
        ll y_base = max(
            (ll)(y1[k3-1] - y1[0]) * w,
            (ll)(y2[k4-1] - y2[0]) * w
        );
        cout << max(x_base, y_base) << '\n';
    }
    return 0;
}
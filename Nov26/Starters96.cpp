#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll T;
int main() {
    cin >> T;
    while(T--){
        ll n, m;
        cin >> n >> m;
        ll t = n * (1 + n) / 2, tong = 0;
         for(ll i = 1; i <= m; i++){
            ll x;
            cin >> x;
            tong += x;
        }
        cout << t - tong << "\n";
    }
    return 0;
}

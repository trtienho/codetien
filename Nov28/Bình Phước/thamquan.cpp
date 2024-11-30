#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t, a, b;
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> t >> a >> b;
    ll res = 0;
    if (t >= 2 && t <= 6) { 
        for (ll i = a; i < b; i++) {
            if (i >= 6 && i < 12) res += 6;  
            else if (i >= 12 && i < 18) res += 10; 
            else res += 20;
        }
    } 
    else {
        for (ll i = a; i < b; i++) {
            if (i >= 6 && i < 12) res += 10;
            else if (i >= 12 && i < 18) res += 15; 
            else res += 20;
        }
    }
    cout << res << "\n";
    return 0;
}

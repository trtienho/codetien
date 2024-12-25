#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e3+50;
ll n, a[N], F[200050];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    ll tong = 0;
    for(ll i = 1; i <= n; i++) {cin >> a[i]; tong += a[i];}
    F[0]= 1;
    for(ll i = 1; i <= n; i++){
        for(ll j = tong / 2; j >= a[i]; j--){
            if(F[j - a[i]] == 1) F[j] = 1;
        }
    }
    ll x = 0, y = 0;
    for(ll j = tong / 2; j >= 1; j--){
        if(F[j] == 1){
            x = j, y = tong - j;
            break;
        }
    }
    cout << abs(x - y) << "\n" << x << " " << y;
    return 0;
}
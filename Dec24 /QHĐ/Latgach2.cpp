#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+50;
const ll MOD = 1e9+7;
ll T, F[N];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    F[1] = 1;
    F[2] = 5;
    for(ll i = 3; i <= 1e6; i++) F[i] = ((F[i-1]) + (F[i-2] * 3)) % MOD;
    cin >> T;
    cout << F[T];
    return 0;
}
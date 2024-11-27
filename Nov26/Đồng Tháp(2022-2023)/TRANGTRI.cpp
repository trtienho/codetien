#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 5e4+50;
ll n, k;
ll a[N], F[N];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(ll i = 1; i <= n; i++) {cin >> a[i]; F[i] = 0;}
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j < i; j++){
            if(abs(a[i] - a[j]) <= k) F[i] = F[j] + 1;
        }
    }
    ll maxx = 0;
    for(ll i = 1; i <= n; i++) maxx = max(maxx, F[i]);
    cout << maxx + 1;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+50;
ll n, a[N], q, pre[N];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    cin >> q;
    while(q--){
        ll l, r, x;
        cin >> l >> r >> x;
        pre[l] += x;
        pre[r + 1] -= x;
    }
    for(ll i = 1; i <= n; i++){
        pre[i] += pre[i-1];
        cout << pre[i] + a[i] << " ";
    }
    return 0;
}
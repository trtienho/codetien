#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 3e5+50;
ll so(ll a){
    ll tong = 0;
    string b = to_string(a);
    for(ll i = 0; i < b.size(); i++) tong += b[i] - '0';
    return tong;
}
ll n, a[N], dem[9999];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    ll tong = 0;
    for(ll i = 1; i <= n; i++){
        dem[so(a[i-1])]++;
        tong += dem[so(a[i])];
    }
    cout << tong;
    return 0;
}
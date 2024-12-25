#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e3+50;
ll n, a[N];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    ll tong = 0;
    for(ll i = 1; i <= n; i++) {cin >> a[i]; tong += a[i];}
    sort(a+1,a+n+1);
    cout << "- Tien sau khi sap xep: ";
    for(ll i = 1; i <= n; i++) cout << a[i] << " ";
    cout << "\n";
    cout << "- Menh gia thap nhat: " << a[1] << " (dong); menh gia cao nhat: " << a[n] << " (dong) \n";
    cout << "- Tong so tien thu duoc: " << tong << " (dong)";
    return 0;
}
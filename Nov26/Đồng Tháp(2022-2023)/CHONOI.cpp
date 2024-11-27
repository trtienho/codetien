#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+50;
ll n, k;
ll a[N];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }
    ll tong = 0;
    sort(a + 1, a+ n + 1);
    for(ll i = 1; i <= n; i++){
        ll l = i, r = n, ans = -1;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(a[mid] + a[i] <= k){
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        if(ans != -1) tong += ans - i;
    }
    cout << tong;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+50;
ll n, k;
ll x[N], pre[N];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(ll i = 1; i <= n; i++){
        cin >> x[i];
        pre[i] = pre[i-1]+x[i];
    }
    ll tong = 0;
    for(ll i = 1; i <= n; i++){
        ll l = 1, r = i, ans = -1;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(pre[i] - pre[mid - 1] <= k){
                r = mid - 1;
                ans = mid;
            }
            else l = mid + 1;
        }
        if(ans != -1) tong += i - ans + 1;
    }
    cout << tong;
    return 0;
}
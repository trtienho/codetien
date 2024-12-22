#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+50;
ll n, a[N];
ll q;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    cin >> q;
    for(ll i = 1; i <= q; i++){
        ll x;
        cin >> x;
        ll l = 1, r = n, ans = -1;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(a[mid] <= x){
                l = mid + 1;
                if(a[mid] == x) ans = mid;
            }
            else r = mid - 1;
        }
        l = 1, r= n;
        ll ans1 = -1;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(a[mid] >= x){
                r = mid - 1;
                if(a[mid] == x) ans1 = mid;
            }
            else l = mid + 1;
        }
        cout << ans1 << " " << ans << "\n";
    }
    return 0;
}
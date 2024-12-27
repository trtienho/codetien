#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first 
#define se second
const ll N = 1e6+50;
bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    if(a.first > b.first){
        ll x = a.first, y = a.second;
        a.first = b.first;
        a.second = b.second;
        b.first = x;
        b.second = y;
        return false;
    }
    else return true;
}
ll n, k, pre[N];
pair<ll, ll> a[N];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(ll i = 1; i <= n; i++) cin >> a[i].fi >> a[i].se;
    sort(a + 1, a + n + 1, cmp);
    for(ll i = 1; i <= n; i++){
        pre[i] = pre[i-1]+a[i].se;
    }
    ll tong = 0;
    for(ll i = 1; i <= n; i++){
        ll l = 1, r = n, ans = -1;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(a[mid].fi >= a[i].fi - k * 2){
                r = mid - 1;
                ans = mid;
            }
            else l = mid + 1;
        }
        tong = max(tong, pre[i] - pre[ans - 1]);
    }
    cout << tong;
    return 0;
}
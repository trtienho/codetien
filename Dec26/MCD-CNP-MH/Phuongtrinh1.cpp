#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5+50;
ll n, p;
ll a[N], pre[N];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> p;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
        pre[i] = pre[i-1]+a[i];
    }
    ll tong = 0;
    for(ll i = 1; i <= n; i++){
        ll l = 1, r = i;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(pre[i] - pre[mid-1] <= p){
                r = mid - 1;
                if(pre[i] - pre[mid-1] == p) tong++;
            }
            else l = mid + 1;
        }
    }
    cout << tong;
    return 0;
}
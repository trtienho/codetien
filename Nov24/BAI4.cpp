#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll NN = 1e5+50;
ll N, K;
ll A[NN];
ll so(ll mid){
    ll tong = 0;
    for(ll i = 1; i <= N; i++){
        if(A[i] <= mid) tong++;
        else tong += A[i] / mid;
    }
    return tong;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);
    cin >> N >> K;
    ll maxx = 0;
    for(ll i = 1; i <= N; i++){
        cin >> A[i];
        maxx = max(maxx, A[i]);
    }
    ll l = 1, r = 1000000000, ans = 0;
    while(l <= r){
        ll mid = (l + r) / 2;
        if(so(mid) <= K){
            r = mid - 1;
            if(so(mid) == K) ans = mid; 
        }
        else l = mid + 1;
    }
    cout << ans;
    return 0;
}
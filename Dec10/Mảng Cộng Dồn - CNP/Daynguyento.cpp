#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+1e3;
ll n, k, a[N];
bool check[N];
vector <ll> x;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    check[1] = false;
    for(ll i = 2; i <=1e6+50; i++){
        check[i] = true;
    }
    for(ll i = 2; i <= sqrt(1e6+50); i++){
        if(check[i] == true){
            for(ll j = i * i; j <= 1e6+50; j+=i) check[j] = false;
        }
    }
    for(ll i = 2; i <= 1e6+50; i++){
        if(check[i] == true) x.push_back(i);
    }
    cin >> n;
    ll tong = 0;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
        if(check[a[i]] == false){
            ll l = 1, r = x.size(), ans = -1;
            while(l <= r){
                ll mid = (l + r) / 2;
                if(x[mid-1] >= a[i]){
                    r = mid - 1;
                    ans = x[mid-1];
                }
                else l = mid + 1;
            }
            l = 1, r= x.size();
            ll ans1 = -1;
            while(l <= r){
                ll mid = (l + r) / 2;
                if(x[mid-1] <= a[i]){
                    l = mid + 1;
                    ans1 = x[mid-1];
                }
                else r = mid - 1;
            }
            if(a[i] == 1) tong += 1;
            else tong += min(abs(a[i] - ans), abs(a[i] - ans1));
        }
    }
    cout << tong;
    return 0;
}
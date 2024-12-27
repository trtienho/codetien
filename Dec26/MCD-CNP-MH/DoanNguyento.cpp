#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5+50;
const ll NGTO = 1e6+1e5+50;
const ll M = 1e6+1e5;
ll n, k;
ll a[N], pre[N];
bool check[NGTO];
vector <ll> x;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    check[1] = true;
    for(ll i = 2; i <= sqrt(M); i++){
        if(check[i] == false){
            for(ll j = i * i; j <= M; j+=i) check[j] = true;
        }
    }
    for(ll i = 2; i <= M; i++){
        if(check[i] == false) x.push_back(i);
    }
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
        if(check[a[i]] == false) pre[i] = pre[i-1];
        else{
            if(a[i] == 1) pre[i] = pre[i-1]+1;
            else{
                ll l = 1, r = x.size(), ans1 = -1, ans2 = -1;
                while(l <= r){
                    ll mid = (l + r) / 2;
                    if(x[mid-1] <= a[i]){
                        l = mid + 1;
                        ans1 = x[mid-1];
                    }
                    else r = mid - 1;
                }
                l = 1, r = x.size();
                while(l <= r){
                    ll mid = (l + r) / 2;
                    if(x[mid-1] >= a[i]){
                        r = mid - 1;
                        ans2 = x[mid-1];
                    }
                    else l = mid + 1;
                }
                pre[i] = pre[i-1] + min(abs(ans1-a[i]), abs(ans2-a[i]));
            }
        } 
    }
    ll tong = 1000000000000;
    for(ll i = k; i <= n; i++){
        tong = min(pre[i] - pre[i-k], tong);
    }
    cout << tong;
    return 0;
}
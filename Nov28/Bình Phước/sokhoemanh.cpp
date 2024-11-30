#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 3e6+50;
ll l, r;
ll F[N], tong[N];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> l >> r;
    for(ll i = 1; i <= 3e6; i++){
        for(ll j = i; j <= 3e6; j+=i){
            tong[j]+=i;
        }
    }
    ll dem = 0;
    for(ll i = l; i <= r; i++){
        if(tong[i] - i > i) dem++;
    }
    cout << dem;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e7+50;
ll l, r;
bool F[N];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> l >> r;
    F[1] = true;
    for(ll i = 1; i <= sqrt(N); i++){
        if(F[i]==false){
            for(ll j = i * i; j <= N; j+=i){
                F[j] = true;
            }
        }
    }
    ll dem = 0;
    for(ll i = l; i <= r; i++){
        if(F[i] == false) dem++;
    }
    cout << dem;
    return 0;
}
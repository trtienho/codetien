#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll NN = 1e6+50;
ll N;
ll A[NN], dem[NN];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    cin >> N;
    for(ll i = 1; i <= N; i++) {
        cin >> A[i];
        ll tong = sqrt(A[i]);
        if(tong * tong == A[i]) dem[tong]++;
    }
    for(ll i = 0; i <= 1000000; i++){
        if(dem[i] == 0) {cout << i * i; break;}
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 250;
ll n, s, a[N], F[50050];
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    F[0] = 1;
    for(ll i = 1; i <= n; i++){
        for(ll j = s; j >= a[i]; j--){
            if(F[j-a[i]] == 1) F[j] = 1;
        }
    }
    if(F[s] == 1) cout << 1;
    else cout << 0;
    return 0;
}
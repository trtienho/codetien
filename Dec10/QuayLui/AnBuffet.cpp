#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 20;
ll n, u, v;
ll W[N], V[N];
ll preW, preV, ans = 0;
void quaylui(ll i){
    if(i > n){
        if(preW >= u && preW <= v) ans = max(ans, preV);
    }
    else{
        for(ll j = 0; j <= 1; j++){
            if(j == 0) quaylui(i + 1);
            preW+=W[i];
            preV+=V[i];
            quaylui(i+1);
            preW-=W[i];
            preV-=V[i];
        }
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> u >> v;
    for(ll i = 1; i <= n; i++){
        cin >> W[i] >> V[i]; 
    }
    quaylui(1);
    cout << ans;
    return 0;
}
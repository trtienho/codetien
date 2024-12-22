#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
ll a[1000050];
ll maxxi = 0;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(ll i = 1; i <= m; i++) cin >> a[i];
    sort(a+1,a+m+1);
    for(ll i = 1; i <= m; i++){
        if(m - (i - 1) >= n){
            maxxi = max(maxxi, n * a[i]);
        }
        else maxxi = max(maxxi, (m - (i - 1)) * a[i]);
    }
    cout << maxxi;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    cin >> N;
    if(N <= 50) cout << N * 1800;
    else if(N > 50 && N <= 100) cout << 50 * 1800 + (N - 50) * 1900;
    else if(N > 100 && N <= 200) cout << 50 * 1800 + 50 * 1900 + (N - 100) * 2100;
    else cout << 50 * 1800 + 50 * 1900 + 100 * 2100 + (N - 200) * 2200;
    return 0;
}
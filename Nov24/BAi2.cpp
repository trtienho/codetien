#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    cin >> N;
    if(N % 2 != 0) cout << (N / 2) * N - ((N / 2) * (2 * (N / 2) + 2) / 2);
    else cout << (N / 2 - 1) * N - ((N / 2 - 1) * (2 * (N / 2 - 1) + 2) / 2);
    return 0;
}
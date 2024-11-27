#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    cout << (n + k - 1) / k * 6;
    return 0;
}
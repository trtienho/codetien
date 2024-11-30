#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    cout << ((ll)((n - 1) / 2) * 2 + 2) * ((n - 1) / 2) / 2;
    return 0;
}
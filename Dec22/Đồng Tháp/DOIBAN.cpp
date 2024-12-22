#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    cout << a * b / gcd(a, b) << "\n" << b / gcd(a, b) << " " << a / gcd(a, b);
    return 0;
}
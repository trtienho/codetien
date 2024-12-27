#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p, q, r, s, u, v;
ll A, B, C;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> p >> q >> r >> s >> u >> v;
    if(p > q) A+=3;
    else if(p == q) {A+=1; B+=1;}
    else B+=3;
    if(r > s) A+=3;
    else if(r == s) {A+=1; C+=1;}
    else C+=3;
    if(u > v) B+=3;
    else if(u == v) {B+=1; C+=1;}
    else C+=3;
    cout << A << " " << B << " " << C;
    return 0;
}
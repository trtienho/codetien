#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, tong;
bool check[10];
void quaylui(ll i){
    if(i == 1) tong = 0;
    if(i > n){
        cout << tong << "\n";
    }
    else{
        for(ll j = 0; j <= n; j++){
            if((i == 1 && j == 0) || check[j] == true) continue;
            check[j] = true;
            tong = tong * 10 + j;
            quaylui(i + 1);
            check[j] = false;
            tong /= 10;
        }
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    quaylui(1);
    return 0;
}
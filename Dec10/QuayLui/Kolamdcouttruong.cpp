#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll tong = 0;
bool check[20];
void quaylui(ll i){
    if(i > n){
        cout << tong << "\n";
    }
    else{
        for(ll j = 1; j <= n; j++){
            if(check[j] == false){
                check[j] = true;
                tong = tong * 10 + j;
                quaylui(i+1);
                tong /= 10;
                check[j] = false;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    quaylui(1);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll T;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--){
        ll a, b;
        cin >> a >> b;
        ll tong = 0, so = 0;
        for(ll i = 2; i <= sqrt(a); i++){
            if(a % i == 0){
                so = i;
                tong++;
                break;
            }
        }
        if(tong == 0){
            cout << a * ((b + a) / a) - b << "\n"; 
        }
        else if(gcd(a, b) != 1) cout << 0 << "\n";
        else{
            else cout << so * ((b + so) / so) - b << "\n";
        }
    }
    return 0;
}
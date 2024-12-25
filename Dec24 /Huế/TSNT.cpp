#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N;
int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(ll i = 2; i <= sqrt(N); i++){
        while(N % i == 0){
            if(N / i == 1) cout << i;
            else cout << i << ".";
            N /= i;
        }
    }
    if(N != 1) cout << N;
    return 0;
}
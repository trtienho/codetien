#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll NM = 1e5 + 50;
ll T;
ll A[NM], B[NM];
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--){
        ll N, M, H;
        cin >> N >> M >> H;
        for(ll i = 1; i <= N; i++) cin >> A[i];
        for(ll i = 1; i <= M; i++) {cin >> B[i]; B[i] *= H;}
        sort(A + 1, A + N + 1);
        sort(B + 1, B + M + 1);
        ll tong = 0;
        for(ll i = 0; i < min(N, M); i++){
            if(A[N - i] <= B[M - i]) tong += A[N - i];
            else tong += B[M - i];
        }
        cout << tong << "\n";
    }
    return 0;
}

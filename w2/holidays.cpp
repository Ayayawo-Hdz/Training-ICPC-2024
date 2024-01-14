#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int
#define MOD 1000000009

using namespace std;

/*-------------------SOLBEGIN-------------------*/

ll powMOD(ll base, ll exp, ll mod) {
    ll x = 1;
    base %= mod;
    if (base == 0) return 0;
    while (exp > 0) {
        if (exp & 1) x = (x * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return x;
}

void solve() {
    int n; cin >> n;
    ll res = (powMOD(3, n, MOD) - powMOD(2, n + 1, MOD) + MOD) % MOD;
    res = (res + 1) % MOD;
    cout << res << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}

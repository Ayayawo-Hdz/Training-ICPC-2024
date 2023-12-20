#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

void solve(ll& n, ll& k) {
    int x = n, t = 1;
    for (int i = 1; i <= n; i++) {
        if (k >= n - i) {k -= n - i; cout << x-- << " ";} else {cout << t++ << " ";}
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;
    solve(n, k);

    return 0;
}

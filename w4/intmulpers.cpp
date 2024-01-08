#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int

using namespace std;

/*-------------------SOLBEGIN-------------------*/

void solve() {
    ll n; cin >> n;
    ll cvnt = 0;
    if (n < 10) {cout << 0 << endl; return;}
    while (n > 9) {
        ll tmp = n;
        ll prod = 1;
        while (tmp > 0) {prod *= tmp % 10; tmp /= 10;}
        n = prod;
        cvnt++;
    }
    cout << cvnt << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
